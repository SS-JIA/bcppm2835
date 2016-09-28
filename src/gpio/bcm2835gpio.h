#ifndef _BCM2835GPIO_
    #define _BCM2835GPIO_

#include <stdint.h>

class bcm2835gpio
{
    private:
        volatile uint32_t* gpio_addr;

    public:
        bcm2835gpio(uint32_t* base_addr);
        /* Set Pin HIGH or LOW */
        inline void pinset(uint8_t pin, uint8_t state);
        /* Select Pin Function */
        inline void pinfsel(uint8_t pin, uint8_t func); 
};
#endif
