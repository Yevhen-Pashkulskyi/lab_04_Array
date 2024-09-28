//Pashkulsyi Yevhen
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_num(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

int main(void) {
    for (int i = 0; i < 10; i++) {
        int t = rand_num(1, 10);
        int q = rand() % 10;
        printf("%d ", q);
        // printf("\n");
        printf("%d", t);
    }
    return 0;
}
