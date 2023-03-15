//
// Created by maxboykin on 3/13/23.
//

#include "One.h"


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

uint64_t square(uint8_t index){
    if(index == 1) return 1;
    return pow(2, index - 1);
}

uint64_t total(void){
    int sum = 0;
    for(uint8_t i = 1; i < 65; i += 1){
        sum += square(i);
    }
    return sum;
}

int compute(char *lhs, char *rhs){
    if(!lhs || !rhs)
        return -1;

    int count = 0;
    for(;*lhs && *rhs; lhs++, rhs++){
        char left = *lhs;
        char right = *rhs;
        if(left != right)
            count += 1;
    }
    // i had just return count; originally
    return (*lhs || *rhs) ? -1 : count; //if one of the lhs or rhs is still not null then we know its -1
}

bool is_isogram(char phrase[]){

    if(!phrase) return false; // doesnt equal null

    uint32_t letter_flags = 0;
    char sub = 'a';
    while (*phrase) { // doesnt equal '/0' EOF
        char letter = *phrase;
        if (letter >= 'a' && letter <= 'z')
            sub = 'a';
        else if (letter >= 'A' && letter <= 'Z')
            sub = 'A';
        else
            sub = 'X';

        if (sub != 'X'){
            if((letter_flags & (1 << (letter - sub))) != 0) // compares bits in letter flags with 1 with letter - sub
                return false; // if letter_flags is 1 (letter already in that bit then return 1) which is not 0
                // if letter flags is 0, the rightside is always 1 so its 0 & 1 which is 0 so it still is true
            else
                letter_flags |= (1 << (letter - sub));
        }
        printf("The current value of string is %s \n", phrase);
        *phrase++; //increment pointer
    }
    printf("The string of %s is an isogram\n", phrase);
    return true;
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


//bool is_isogram_OLD(char phrase[]){
//    if(phrase == NULL) return false;
//    int phraseLength = strlen(phrase);
//    for(int i = 0; i < phraseLength; i += 1){
//        if(phrase[i] == ' '|| phrase[i] == '-'){
//            continue;
//        }
//        for(int j = i + 1; j < phraseLength; j += 1){
//            if(phrase[i] == ' ' || phrase[j] == '-'){
//                continue;
//            }
//            if(tolower(phrase[i]) == tolower(phrase[j])){
//                printf("The string of %s is not an isogram\n", phrase);
//                return false;
//            }
//        }
//    }
//    printf("The string of %s is an isogram\n", phrase);
//    return true;
//}