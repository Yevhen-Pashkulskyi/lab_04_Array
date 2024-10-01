#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED

int run();

int random_number(int min, int max);

int *array_created(int size, int min, int max);

void print_array(int arr[], int size);

int *sort_array(int *array, int size);

int search_min_array(int *array, int size);

int search_max_array(int *array, int size);

int *first_array_divided(int *array, int size, int first_size);

int *second_array_divided(int *array, int size, int second_value);

int counting_identical_numbers(int *array, int size);

#endif
