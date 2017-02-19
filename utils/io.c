//
// Created by Joway on 2017/2/19.
//

#include <stdio.h>
#include "io.h"

void printArray(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}