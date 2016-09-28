# bcppm2835
A peripherals driver for the Broadcom 2835 chip on the Raspberry Pi 2 written in c++. Functions on direct register access, much like Mike's bcm2835 library.

Currently supports the following peripherals:
GPIO
SPI

## Usage
Clone the repository and create a build/ directory. Go into the root of the repository and run ~~~make~~~. A bcppm2835.a static library will be created in build/ which can be linked to your project. Don't forget to copy the headers as well!
