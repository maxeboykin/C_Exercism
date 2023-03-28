//
// Created by maxboykin on 3/27/23.
//

#include "hamming.h"

int compute(const char *lhs, const char *rhs)
{
    if (!lhs || !rhs)
        return -1;

    int distance = 0;
    for (; *lhs && *rhs; lhs++, rhs++) {
        if (*lhs != *rhs)
            distance++;
    }
    return (*lhs || *rhs) ? -1 : distance;
}