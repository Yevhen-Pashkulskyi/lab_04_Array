/**
 *Перша функція робить пошук мінімального значення з масиву
 *Друга функція робить пошук максимального значення з масиву
 *Третя функція рахує кількість однакових значень в масиву
 */
int search_min_arr(int *arr, int len) {
    int min = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int search_max_arr(int *arr, int len) {
    int max = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int count_identical_nums(int *arr, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}
