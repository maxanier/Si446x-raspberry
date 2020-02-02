/*
 * Project: Si4463 Radio Library for AVR and Arduino
 * Author: Zak Kemble, contact@zakkemble.co.uk
 * Copyright: (C) 2017 by Zak Kemble
 * License: GNU GPL v3 (see License.txt)
 * Web: http://blog.zakkemble.co.uk/si4463-radio-library-avr-arduino/
 */

#include <bcm2835.h>
#include "Si446x_spi.h"

void spi_init()
{
    bcm2835_spi_begin();
    bcm2835_spi_setBitOrder(BCM2835_SPI_BIT_ORDER_MSBFIRST);      /* default */
    bcm2835_spi_setDataMode(BCM2835_SPI_MODE0);                   /* default */
    bcm2835_spi_setClockDivider(BCM2835_SPI_CLOCK_DIVIDER_65536); /* default */ //TODO switch to 128 or lower (down to 16)
    bcm2835_spi_setChipSelectPolarity(BCM2835_SPI_CS0, LOW);      /* default */
}

void spi_transfer_nr(unsigned char data) {
    bcm2835_spi_transfer(data);
}

char spi_transfer(unsigned char data) {
    return bcm2835_spi_transfer(data);
}

void spiSelect() {
    bcm2835_spi_chipSelect(BCM2835_SPI_CS0);                      /* default */
}

void spiDeselect() {
    bcm2835_spi_chipSelect(BCM2835_SPI_CS_NONE );                      /* default */
}
