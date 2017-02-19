//
// Created by Joway on 2017/2/18.
//

#ifndef PROBLEMMINGPEARLS_BITMAP_H
#define PROBLEMMINGPEARLS_BITMAP_H

#define BITSPERWORD 32
#define SHIFT 5
#define MASK 0x1F
#define N 10000000

int bitmap[1 + N/BITSPERWORD];

void set(int i);
void clr(int i);
int test(int i);

#endif //PROBLEMMINGPEARLS_BITMAP_H
