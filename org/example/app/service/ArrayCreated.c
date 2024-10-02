#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "../service/Func.h"
/**
 * Ця функція створює масив
 */
int *arr_created(int size, int min, int max) {
    int *arr = malloc(size * sizeof(int));
    if (arr == NULL) {
        // perror("malloc");
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = random_num(min, max);
    }
    return arr;
}

/**
 * Ця функція створює масив з першої частини загального масиву
 */
int *first_part_arr(int *arr, int size, int first_value) {
    int *arr_first = malloc(first_value * sizeof(int));
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (i <= first_value) {
            arr_first[j] = arr[i];
            j++;
        }
    }
    return arr_first;
}

/**
* Ця функція створю масив останні значення с загального
 */
int *second_part_arr(int *arr, int size, int second_val) {
    int *arr_second = malloc((size - second_val) * sizeof(int));
    int j = 0;
    if (size % 2) {
        for (int i = second_val - 1; i < size; i++) {
            arr_second[j] = arr[i];
            j++;
        }
    } else {
        for (int i = second_val; i < size; i++) {
            arr_second[j] = arr[i];
            j++;
        }
    }
    return arr_second;
}
