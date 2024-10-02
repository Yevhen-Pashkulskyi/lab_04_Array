#include <stdlib.h>

/**
 * Функція створю рандомне ціле число
 */
int random_num(int min, int max) {
    return rand() % (max - min + 1) + min;
}
