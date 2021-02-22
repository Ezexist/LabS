#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void fill_array_1(int size, int* start_array);

void fill_array_of_repeats(int size, int* start_array, int* array_of_repeats);

int size_of_res_array(int size, int* start_array, int* array_of_repeats);

void fill_result_array(int size, int* start_array, int* array_of_repeats, int* result_array);

void fill_array_2(int size, int* array);

void find_minmax_1(int size, int* array, int min_max[]);

void fill_res_arr_1(int* array, int* res_arr, int pos1, int pos2);

float min_max(int size, float array[], int min_max[]);
float find_minmax_2(int size, float array[], int min_max[]);
void fill_res_arr_2(float array[], float* res_arr, int pos1, int pos2);

void fill_array_3(int size, int** array);
void fill_res_array(int size, int** array, int* res_array);
void sort_array(int size, int* res_array);