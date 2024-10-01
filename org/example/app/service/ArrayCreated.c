#include <stdio.h>
#include <stdlib.h>
#include "../service/Func.h"

void array_created(int size) {
    int *arr = malloc(size * sizeof(int));
    int min = 0;
    int max = 10;
    for (int i = 0; i < size; i++) {
        arr[i] = random_number(min, max);
    }
    free(arr);
}
