#include <stdio.h>
#include <stdlib.h>
#include "../service/Func.h"
/**
 * Ця функція створює масив
 */
int *arr_created(int size, int min, int max) {
    int *arr = malloc(size * sizeof(int)); // виділення пам'яті для масиву
    // перевірка умови якщо функція maloc не виділела пам'яті то повертає значення null
    if (arr == NULL) {
        // perror("malloc");
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = random_num(min, max); // запис рандомних значень в індекс масиву
    }
    return arr;
}

/**
 * Ця функція створює масив з першої частини загального масиву
 */
int *first_part_arr(int *arr, int first_value) {
    int *arr_first = malloc(first_value * sizeof(int)); // виділення пам'яті для масиву
    for (int i = 0; i < first_value; i++) {
        arr_first[i] = arr[i];
    }
    return arr_first;
}

/**
* Ця функція створю масив останні значення с загального масиву
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
