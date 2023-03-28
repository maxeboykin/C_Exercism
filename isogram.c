//
// Created by maxboykin on 3/27/23.
//

#include "isogram.h"
#include <stdint.h>

bool is_isogram(const char phrase[]){

    if(!phrase) return false; // doesnt equal null

    uint32_t letter_flags_mask = 0;
    char sub = 'a';
    while (*phrase) { // doesnt equal '/0' EOF
        char letter = *phrase;
        if (letter >= 'a' && letter <= 'z')
            sub = 'a';
        else if (letter >= 'A' && letter <= 'Z')
            sub = 'A';
        else
            sub = 'X';

        if (sub != 'X'){ // https://exercism.org/tracks/c/concepts/bits
            if((letter_flags_mask & (1 << (letter - sub))) != 0) // compares bits in letter flags with 1 with letter - sub
                return false; // if letter_flags is 1 (letter already in that bit then return 1) which is not 0
            else
                letter_flags_mask |= (1 << (letter - sub));
        }
        printf("The current value of string is %s \n", phrase);
        *phrase++; //increment pointer
    }
    printf("The string of %s is an isogram\n", phrase);
    return true;
}