#include <stdio.h>
#include <assert.h>
#include "utils/io.h"
#include "chapter1/bitmap.h"
#include "chapter2/shift.h"

void testChapter2(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int result[] = {4, 5, 6, 1, 2, 3};
    shiftLeft(arr, 6, 3);
    printArray(arr, 6);
    for (int i =0; i < sizeof(arr)/ sizeof(int);++i){
        assert(arr[i] == result[i]);
    }
}

int main() {
    testChapter2();

    return 0;
}
