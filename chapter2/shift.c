//
// Created by Joway on 2017/2/19.
//

#include <printf.h>
#include "shift.h"
#include "../utils/io.h"


/***
 * reverse()
 * @param arr
 * @param start
 * @param end
 * @return reversed array
 */
int *reverse(int *arr, int start, int end) {
    for (int i = 0; i < (end - start + 1) / 2; ++i) {
        int left = start + i;
        int right = end - i;
        arr[left] = arr[left] + arr[right];
        arr[right] = arr[left] - arr[right];
        arr[left] = arr[left] - arr[right];
    }
    return arr;
}

/***
 * reverse()
 * @param arr
 * @param start
 * @param end
 * @return reversed array
 */
void shiftLeft(int *arr, int length, int offset) {
    reverse(arr, 0, offset - 1);
    printArray(arr, length);
    reverse(arr, offset, length - 1);
    printArray(arr, length);
    reverse(arr, 0, length - 1);
    printArray(arr, length);
}

