#include <stdio.h>
#include <stdlib.h>

int search_min_array(int *array, int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int search_max_array(int *array, int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void counting_identical_numbers(int *array, int size) {//TODO доробити! Невірно рахує однакові числа
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (array[i] == array[j]) {
                count++;
            } else {
                count = 0;
            }
        }
    }
}
