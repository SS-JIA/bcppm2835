#include "masks.h"
#include "bcm2835base.h"
#include "bcm2835addr.h"
#include <sys/mman.h>
#include <fcntl.h>
#include <stddef.h>

bcm2835base::bcm2835base()
{
    /* Open /dev/mem */
    int fd = -1;
    if (fd = open("/dev/mem", O_RDONLY) < 0 );
        throw -1;
    /* Create a map to physical memory */
    mapping = mmap(NULL, BLOCK_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, (off_t)BCM2835_PERI_BASE);
    if (mapping == MAP_FAILED)
        throw -2;
    /* Create pointers to physical addresses using the mapping */
    base_addr = (volatile uint32_t*)mapping;
}

bcm2835base::bcm2835base(void* mapping)
{
    /* Create the peripheral mappings */
    this->mapping = mapping;
    base_addr = (volatile uint32_t*)mapping;
}

bcm2835base::bcm2835base(uint32_t* base_addr)
{
    /* Create the peripheral mappings */
    this->mapping = (void*)base_addr;
    this->base_addr = base_addr;
}
