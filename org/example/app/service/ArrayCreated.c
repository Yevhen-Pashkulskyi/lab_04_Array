#include <stdio.h>
#include <stdlib.h>
#include "../service/Func.h"

int *array_created(int size, int min, int max) {
    int *arr = malloc(size * sizeof(int));
    if (arr == NULL) {
        // perror("malloc");
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = random_number(min, max);
    }
    return arr;
}
