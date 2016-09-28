#ifndef _BCM2835SPI_
    #define _BCM2835SPI_

#include <stdint.h>

class bcm2835spi
{
    private:
        uint32_t* spi_addr;

    public:
        bcm2835spi(uint32_t* base_addr);
        void spiconfig();
        void spiselect(uint8_t slave);
        void spitransfer(unsigned char *rbuf, unsigned char *tbuf, uint8_t size);
        void spisend(unsigned char *tbuf, uint8_t size);
        void spirecieve(unsigned char *rbuf, uint8_t size);
};

#endif
