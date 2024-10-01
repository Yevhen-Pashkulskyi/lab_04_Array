#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../service/Func.h"

int const MIN = 3, MAX = 8;

int run() {
    // int const MIN = 3, MAX = 8;
    // srand(time(NULL));
    int natural_number = random_number(MIN, MAX);
    array_created(natural_number);

    // for (int i = 0; i < natural_number; i++) {
    //     array[i] = rand() % 10;
    // }
    // array_created(natural_number);
    // for (int i = 0; i < natural_number; i++) {
    //     printf("%d ", array[i]);
    // }
    // printf("\n%d", natural_number);
    return 0;
}
