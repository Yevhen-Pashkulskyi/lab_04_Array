#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int min, int max) {
    return rand() % (max - min + 1) + min;
}
