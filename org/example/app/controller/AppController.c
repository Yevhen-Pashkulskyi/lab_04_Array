#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../service/Func.h"

int const MIN = 3, MAX = 20;

int run() {
    srand(time(NULL)); // функція time передає значення в сек. для встановлення стартового значення

    // присвоення натуральног числа сгенерованим функцією з межами діапазону
    int natural_num = random_num(MIN, MAX);

    //вказівник на область пам'яті яка приймає адресу масиву яку створює ця функція
    int *array = arr_created(natural_num, 0, 10);

    //умова якщо maloc не виділів пам'ять
    if (array == NULL) {
        perror("array creation failed"); //exception якщо maloc не виділів пам'яті
        return -1; //закриття програми
    }

    print_arr(array, natural_num); //функція друку масиву

    int *sortArray = sort_arr(array, natural_num);
    print_arr(sortArray, natural_num);

    printf("\nmin = %d", search_min_arr(array, natural_num));
    printf("\nmax = %d\n", search_max_arr(array, natural_num));

    int first_size_devide = natural_num / 2;
    int *first_arr = first_part_arr(sortArray, natural_num, first_size_devide);
    printf("\nThe first part of the array = ");
    print_arr(first_arr, first_size_devide);

    int second_size_devide = natural_num - first_size_devide;
    int *second_arr = second_part_arr(sortArray, natural_num, second_size_devide);
    printf("\nThe second part of the array = ");
    print_arr(second_arr, second_size_devide);

    printf("\nThe number of hits of the first half of the array = %d",
           count_identical_nums(first_arr, first_size_devide));
    printf("\nThe number of hits of the first half of the array = %d",
           count_identical_nums(second_arr, second_size_devide));

    // звільнення пам'яті яка була виділена в функціях
    free(array);
    free(first_arr);
    free(second_arr);
    return 0;
}
