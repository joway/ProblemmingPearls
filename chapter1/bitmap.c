//
// Created by Joway on 2017/2/18.
//

#include "bitmap.h"


void set(int i){
    bitmap[i >> SHIFT] |= (1 << (i & MASK));
}
void clr(int i){
    bitmap[i >> SHIFT] &= ~(1 << (i & MASK));
}

int test(int i){
    return bitmap[i >> SHIFT] & (1 << (i & MASK));
}