#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../service/Func.h"

int const MIN = 3, MAX = 8;

int run() {
    srand(time(NULL)); // функція time передає значення в сек. для встановлення стартового значення

    // присвоення натуральног числа сгенерованим функцією з межами діапазону
    int natural_number = random_number(MIN, MAX);

    //вказівник на область пам'яті яка приймає адресу масиву яку створює ця функція
    int *array = array_created(natural_number, 0, 10);

    //умова якщо maloc не виділів пам'ять
    if (array == NULL) {
        perror("array creation failed"); //exception якщо maloc не виділів пам'яті
        return -1; //закриття програми
    }
    print_array(array, natural_number); //функція друку масиву
    int *sortArray = sort_array(array, natural_number);
    print_array(sortArray, natural_number);

    free(array); // звільнення пам'яті яка була виділена в функції array_created
    // printf("\n%d", natural_number);
    return 0;
}
