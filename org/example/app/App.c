//Pashkulsyi Yevhen AS-246 Task №14
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define ARRAY_SIZE rand() % 10
// #define ARRAY_LENGTH 10

// int rand_num(int min, int max) {
//     return (rand() % (max - min + 1)) + min;
// }

int main(void) {
    // for (int i = 0; i < 10; i++) {
    //     int t = rand_num(1, 10);
    //     int q = rand() % 10;
    //     printf("%d ", q);
    //     printf("\n");
    //     printf("%d", t);
    // }
    srand(time(NULL));
    int natural_number = rand() % 8 + 3;
    int array[natural_number];

    for (int i = 0; i < natural_number; i++) {
        array[i] = rand() % 10;
    }
    for (int i = 0; i < natural_number; i++) {
        printf("%d ", array[i]);
    }
    printf("\n%d", natural_number);
    return 0;
}
