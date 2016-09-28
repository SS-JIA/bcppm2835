#include "masks.h"
#include "bcm2835spi.h"
#include "bcm2835addr.h"

bcm2835spi::bcm2835spi(uint32_t* base_addr)
{
    spi_addr = base_addr + GPIO_OFF/4; 
}

void bcm2835spi::spiconfig()
{
    /* Set appropriate settings for the SPI */
    SETBITA(SPI_CS, CSPOL); // Set Chip Select Active Low)
    SETBITA(SPI_CS, CPOL); // Set the Clock to Active High
    SETBITA(SPI_CS, CPHA); // Set SCLK Transition at the middle of the data bit
    SETREGA(SPI_CS, CS, 0x00, V3O0); //Set Chip Select 0
    /* Configure the pins in AF */
    spipinsconfig();
}

void bcm2835spi::spiselect(uint8_t slave) 
{
    switch (slave)
    {
        case (0) :
            CLRBITA(SPI_CS, CS+1); CLRBITA(SPI_CS, CS+0);
            break;
        case (1) :
            CLRBITA(SPI_CS, CS+1); SETBITA(SPI_CS, CS+0);
            break;
        case (2) :
            SETBITA(SPI_CS, CS+1); CLRBITA(SPI_CS, CS+0);
            break;
    }
}

void bcm2835spi::spitransfer(unsigned char *rbuf, unsigned char *tbuf, uint8_t size)
{
    // Clear FIFOs
    SETREGA(SPI_CS, CLEAR, 0x03, V3O0);
    // Set TA to 1
    SETBITA(SPI_CS, TA);
    // Poll TXD and RXD while write bytes to FIFOs
    int rcount = 0;
    int tcount = 0;
    volatile uint32_t *fifo = spi_addr + FIFO_OFF/4;
    while (rcount < size && tcount < size) 
    {
        while (READBITA(SPI_CS, TXD) && tcount < size)
        {
            *fifo = tbuf[tcount]; 
            tcount++;
        }
        while (READBITA(SPI_CS, RXD) && rcount < size)
        {
            rbuf[rcount] = *fifo; 
            rcount++;
        }
    }
    while (!READBITA(SPI_CS, DONE)) { }
    CLRBITA(SPI_CS, TA);
}

void bcm2835spi::spisend(unsigned char *tbuf, uint8_t size)
{
    // Clear FIFOs
    SETREGA(SPI_CS, CLEAR, 0x03, V3O0);
    // Set TA to 1
    SETBITA(SPI_CS, TA);
    // Poll TXD and RXD while write bytes to FIFOs
    int tcount = 0;
    char rbuf;
    volatile uint32_t *fifo = spi_addr + FIFO_OFF/4;
    while (tcount < size) 
    {
        while (READBITA(SPI_CS, TXD) && tcount < size)
        {
            *fifo = tbuf[tcount]; 
            tcount++;
        }
        while (READBITA(SPI_CS, RXD))
        {
            rbuf = *fifo; 
        }
    }
    while (!READBITA(SPI_CS, DONE)) { }
    CLRBITA(SPI_CS, TA);
}

void bcm2835spi::spirecieve(unsigned char *rbuf, uint8_t size)
{
    // Clear FIFOs
    SETREGA(SPI_CS, CLEAR, 0x03, V3O0);
    // Set TA to 1
    SETBITA(SPI_CS, TA);
    // Poll TXD and RXD while write bytes to FIFOs
    int rcount = 0;
    volatile uint32_t *fifo = spi_addr + FIFO_OFF/4;
    while (rcount < size) 
    {
        while (READBITA(SPI_CS, TXD))
        {
            *fifo = 0x01; 
        }
        while (READBITA(SPI_CS, RXD) && rcount < size)
        {
            rbuf[rcount] = *fifo; 
            rcount++;
        }
    }
    while (!READBITA(SPI_CS, DONE)) { }
    CLRBITA(SPI_CS, TA);
}

