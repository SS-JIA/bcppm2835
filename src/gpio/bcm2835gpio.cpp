#include "masks.h"
#include "bcm2835gpio.h"
#include "bcm2835addr.h"

bcm2835gpio::bcm2835gpio(uint32_t* base_addr)
{
    gpio_addr = base_addr + GPIO_OFF/4; 
}

inline void bcm2835gpio::pinset(uint8_t pin, uint8_t state)
{
    state==HIGH ? SETBITA(GPIO_SET(pin), pin%32) : CLRBITA(GPIO_SET(pin), pin%32);    
}

inline void bcm2835gpio::pinfsel(uint8_t pin, uint8_t func)
{
    SETREGA(GPIO_FSEL(pin), pin%10*3, func, V7O0);
}
