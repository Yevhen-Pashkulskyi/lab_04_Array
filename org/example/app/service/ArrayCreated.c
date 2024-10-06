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
int *first_part_arr(int *arr, int first_len) {
    int *arr_first = malloc(first_len * sizeof(int)); // виділення пам'яті для масиву
    for (int i = 0; i < first_len; i++) {
        arr_first[i] = arr[i];
    }
    return arr_first;
}

/**
* Ця функція створю масив останні значення с загального масиву
 */
int *second_part_arr(int *arr, int len, int second_len) {
    int *arr_second = malloc((len - second_len) * sizeof(int));
    int index = 0;
    if (len % 2) {
        for (int i = second_len - 1; i < len; i++) {
            arr_second[index] = arr[i];
            index++;
        }
    } else {
        for (int i = second_len; i < len; i++) {
            arr_second[index] = arr[i];
            index++;
        }
    }
    return arr_second;
}
