//
// Created by maxboykin on 3/13/23.
//

#include "One.h"
#include <stdio.h>

bool is_isogram(char phrase[]){



}

bool is_armstrong_number(int candidate){
    int remainder, n, originalNum = 0;
    float result = 0.0;
    for(originalNum = candidate; originalNum != 0; n+= 1){
        originalNum = originalNum / 10;
    }
    for(originalNum = candidate; originalNum != 0; originalNum /= 10){
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }
    if((int)result == candidate){
        printf("The candidate number of %i is an armstrong variable\n", candidate);
    } else {
        printf("The candidate number of %i is not an armstrong variable\n", candidate);
    }
    return (int)result == candidate;
}