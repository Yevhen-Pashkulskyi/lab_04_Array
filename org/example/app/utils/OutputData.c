#include <stdio.h>
/**
 * Функція роздруковує масив
 */
void print_arr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
