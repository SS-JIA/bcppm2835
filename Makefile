CC = g++
DEPS = src/bcm2835addr.h src/masks.h
AR = ar

build/bcppm2835.a: build/bcm2835base.o build/bcm2835spi.o build/bcm2835gpio.o
	$(AR) r build/bcppm2835.a build/bcm2835base.o build/bcm2835spi.o build/bcm2835gpio.o

build/bcm2835base.o: src/bcm2835base.cpp src/bcm2835base.h $(DEPS)
	$(CC) -o build/bcm2835base.o -c src/bcm2835base.cpp

build/bcm2835spi.o: src/spi/bcm2835spi.cpp src/spi/bcm2835spi.h $(DEPS)
	$(CC) -o build/bcm2835spi.o -c src/spi/bcm2835spi.cpp

build/bcm2835gpio.o: src/gpio/bcm2835gpio.cpp src/gpio/bcm2835gpio.h $(DEPS)
	$(CC) -o build/bcm2835gpio.o -c src/gpio/bcm2835gpio.cpp
