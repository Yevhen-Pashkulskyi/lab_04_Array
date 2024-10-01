#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../service/Func.h"

int const MIN = 3, MAX = 8;

int run() {
    srand(time(NULL));
    const int natural_number = random_number(MIN, MAX);
    int * array = array_created(natural_number,0,10);
    output_data(array);
    free(array);
    return 0;
}
