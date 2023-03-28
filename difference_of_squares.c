//
// Created by maxboykin on 3/27/23.
//

#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number){
    if(number == 0) return 0;
    unsigned int sum = 0;
    for(unsigned int i = 1; i <= number; i += 1){
        sum += i * i;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    if(number == 0) return 0;
    unsigned int sum = 0;
    for(unsigned int i = 1; i <= number; i += 1){
        sum += i;
    }
    return sum * sum;
}

unsigned int difference_of_squares(unsigned int number){
    unsigned int sum1 = square_of_sum(number);
    unsigned int sum2 = sum_of_squares(number);
    return (sum2 > sum1) ? (sum2 - sum1) : (sum1 - sum2);
}