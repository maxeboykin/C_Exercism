//
// Created by maxboykin on 3/28/23.


#include "grains.h"

uint64_t square(uint8_t index)
{
    return (index > 0 && index < 65) ? 1ul << (index - 1) : 0;
}
// https://exercism.org/tracks/c/exercises/grains/approaches/bit-shifting
uint64_t total(void)
{
    return ((((uint64_t)1 << 63) - 1) << 1) + 1;
}

