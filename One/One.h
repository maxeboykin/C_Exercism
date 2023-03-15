//
// Created by maxboykin on 3/13/23.
//

#ifndef EXERCISM_ONE_H
#define EXERCISM_ONE_H
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

unsigned int sum_of_squares(unsigned int number);
unsigned int square_of_sum(unsigned int number);
unsigned int difference_of_squares(unsigned int number);

uint64_t square(uint8_t index);
uint64_t total(void);

int compute(const char *lhs, const char *rhs);
bool is_armstrong_number(int candidate);
bool is_isogram(char phrase[]);

#endif //EXERCISM_ONE_H
