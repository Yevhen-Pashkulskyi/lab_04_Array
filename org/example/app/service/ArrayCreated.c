#include <math.h>
#include <stdbool.h>
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

int *first_array_divided(int *array, int size, int first_value) {
    int *arr_first = malloc(first_value * sizeof(int));
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (i < first_value) {
            arr_first[j] = array[i];
            j++;
        }
    }
    return arr_first;
}

int *second_array_divided(int *array, int size, int second_value) {
    int *arr_second = malloc(second_value * sizeof(int));
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (i >= second_value) {
            arr_second[j] = array[i];
            j++;
        }
    }
    return arr_second;
}
