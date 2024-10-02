#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED

int run();

int random_num(int min, int max);

int *arr_created(int size, int min, int max);

void print_arr(int arr[], int size);

int *sort_arr(int *arr, int size);

int search_min_arr(int *arr, int size);

int search_max_arr(int *arr, int size);

int *first_part_arr(int *arr, int size, int first_val);

int *second_part_arr(int *arr, int size, int second_val);

int count_identical_nums(int *arr, int size);

#endif
