#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../service/Func.h"

int const MIN = 3, MAX = 20;

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

    printf("\nmin = %d", search_min_array(array, natural_number));
    printf("\nmax = %d\n", search_max_array(array, natural_number));

    int first_size_devide = natural_number / 2;
    int *first_arr = first_array_divided(sortArray, natural_number, first_size_devide);
    print_array(first_arr, first_size_devide);

    int second_size_devide = natural_number - first_size_devide;
    int *second_arr = second_array_divided(sortArray, natural_number, second_size_devide);
    print_array(second_arr, second_size_devide);
    printf("\nfirst = %d", first_size_devide);
    printf("\nsecond = %d", second_size_devide);
    printf("\nsize = %d", natural_number);

    printf("\n%d", counting_identical_numbers(first_arr, first_size_devide));

    free(array); // звільнення пам'яті яка була виділена в функції array_created
    free(first_arr);
    free(second_arr);
    return 0;
}
