#include "bubbleSort.h"

void bubbleSort::swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort::sort(int arr[])
{
    int i, j;
    for (i = 0; i < 100 - 1; i++) {
        for (j = 0; j < 100 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}