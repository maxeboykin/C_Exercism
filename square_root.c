//
// Created by maxboykin on 3/28/23.
//

#include "square_root.h"
int square_root(int radicand) {
    int root = 1;
    while (root * root != radicand && (root+1)*(root+1) < radicand){
        root += 1;
    }
    return root;
}
