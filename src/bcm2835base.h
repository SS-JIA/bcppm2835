#ifndef _BCM2835BASE_
    #define _BCM2835BASE_

#include <stdint.h>

class bcm2835base
{
    public:
        /* pointer to memory mapped to physical memory */
        void* mapping;

    private:
        /* pointer to peripheral base address */
        volatile uint32_t *base_addr;

    public:
        /* Call when /dev/mem/has not been mapped */
        bcm2835base();
        /* Call when pointers to physical memory already exists */
        bcm2835base(void* mapping);
        bcm2835base(uint32_t* base_addr);
};

#endif
