//
// Created by maxboykin on 3/13/23.
//

#include "One.h"
#include <stdio.h>
#include <stdint.h>
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