//
// Created by maxboykin on 3/27/23.
//

#include "armstrong_numbers.h"
#include <math.h>

//bool is_armstrong_number(int candidate){
//
//    if (candidate < 10)
//        return true;
//
//    int digit_count = log10(candidate) + 1;
//
//    int num = candidate;
//    int pow_total = 0;
//    while(num > 0)
//    {
//        int pow_temp = num % 10;
//        int pow_temp_total = 1;
//        for (int i = 1; i < digit_count; i+=1){
//            pow_temp_total *= pow_temp;
//        }
//        pow_total += pow_temp_total;
//        num /= 10;
//    }
//
//    return pow_total == candidate;
//}