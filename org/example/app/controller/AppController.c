#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../service/Func.h"

const int MIN = 3, MAX = 20;

int run() {
    srand(time(NULL)); // функція time передає значення в сек. для встановлення стартового значення

    // присвоення натуральног числа сгенерованим функцією з межами діапазону
    int natural_num = random_num(MIN, MAX);

    //вказівник на область пам'яті яка приймає адресу масиву яку створює ця функція
    int *array = arr_created(natural_num, 0, 100);
    //умова якщо maloc не виділів пам'ять
    if (array == NULL) {
        perror("array creation failed"); //exception якщо maloc не виділів пам'яті
        return -1; //закриття програми
    }
    printf("Created array:\n");
    print_arr(array, natural_num); //функція друку масиву

    //вказівник на область відсортованого масиву
    int *sortArray = sort_arr(array, natural_num);
    printf("Sorted array:\n");
    print_arr(sortArray, natural_num); // друк відсортованого масиву

    // друк мінімального і максимального значення масиву
    printf("\nmin = %d", search_min_arr(array, natural_num));
    printf("\nmax = %d\n", search_max_arr(array, natural_num));

    //розрахунок розміру першої частини загального масиву, та вивід його
    int first_arr_len = natural_num / 2;
    // вказівник на область пам'яті який передає новий масив, перша частина від загального
    int *first_arr = first_part_arr(sortArray, first_arr_len);
    printf("\nThe first part of the array:\n");
    print_arr(first_arr, first_arr_len);

    //розрахунок розміру другої частини загального масиву, та вивід його
    int second_arr_len = natural_num - first_arr_len;
    // вказівник на область пам'яті який передає новий масив, друга частина від загального
    int *second_arr = second_part_arr(sortArray, natural_num, second_arr_len);
    printf("The second part of the array:\n");
    print_arr(second_arr, second_arr_len);

    //функція друку яка приймає значення, яке розраховано в функції для підрахунку кількості влучань
    printf("\nThe number of hits of the first half of the array = %d",
           count_identical_nums(first_arr, first_arr_len));
    printf("\nThe number of hits of the second half of the array = %d\n",
           count_identical_nums(second_arr, second_arr_len));

    // звільнення пам'яті яка була виділена в функціях
    free(array);
    free(first_arr);
    free(second_arr);
    return 0;
}
