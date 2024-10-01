#include <stdio.h>
#include <stdlib.h>

void *output_data(int arr[]) {
    for (int i = 0; i < sizeof(arr); i++) {
        printf("%d ", arr[i]);
    }
    return arr;
}
