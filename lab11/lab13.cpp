#include "Header.h"
#define SIZE 20

void fill_array_1(int size, int* start_array) {
    for (int i = 0; i < 10; i++) {
        *(start_array + i) = rand() % 5 + 1;
    }
}

void fill_array_of_repeats(int size, int* start_array, int* array_of_repeats) {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (*(start_array + i) == *(start_array + j)) {
                count++;
            }
        }
        *(array_of_repeats + i) = count;
        count = 0;
    }
}

int size_of_result(int size, int* start_array, int* array_of_repeats) {
    int res_size = 0;
    int buff = 0;
    for (int i = 0; i < 10; i++) {
        if (*(array_of_repeats + i) == 1) {
            continue;
        }
        else {
            for (int j = 0; j < i; j++) {
                if (*(start_array + i) == *(start_array + j)) {
                    buff = 1;
                }
            }
            if (buff == 0) {
                res_size += 1;
            }
            buff = 0;
        }
    }
    return res_size;
}

void fill_result_array(int size, int* start_array, int* array_of_repeats, int* result_array) {
    int k = 0;
    int buff = 0;
    for (int i = 0; i < 10; i++) {
        if (*(array_of_repeats + i) == 1) {
            continue;
        }
        else {
            for (int j = 0; j < i; j++) {
                if (*(start_array + i) == *(start_array + j)) {
                    buff = 1;
                }
            }
            if (buff == 0) {
                *(result_array + k) = *(start_array + i);
                *(result_array + k + 1) = *(array_of_repeats + i);
                k += 2;
            }
            buff = 0;
        }
    }
}

void fill_array_2(int size, int* array)
{
    for (size_t i = 0; i < 20; i++)
    {
        *(array + i) = rand() % 20 - 10;
    }
}

void find_minmax_1(int size, int* array, int min_max[])
{
    int temp = 0;
    int sum = 0;
    int temp_1_pos = 0;
    int first_pos = 0;
    int second_pos = 0;
    for (int i = 0; i < 20; i++) {
        if (*(array + i) > 0) {
            if (temp == 0) {
                temp_1_pos = i;
            }
            temp += *(array + i);
        }
        else {
            if (temp > sum) {
                sum = temp;
                first_pos = temp_1_pos;
                second_pos = i - 1;
            }
            temp = 0;
        }
    }
    min_max[0] = first_pos;
    min_max[1] = second_pos;
}

void fill_res_arr(int* array, int* res_arr, int pos1, int pos2) {
    for (int i = pos1; i <= pos2; i++) {
        *(res_arr + (i - pos1)) = *(array + i);
    }
}

float find_minmax_2(int size, float array[], int min_max[])
{
    int temp = 1;
    int count = 0;
    int temp_1 = 0;
    int first_pos = 0;
    int second_pos = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] >= array[i - 1]) {
            if (temp == 1) {
                temp_1 = i - 1;
            }
            temp += 1;
        }
        else {
            if (temp > count) {
                count = temp;
                first_pos = temp_1;
                second_pos = i - 1;
            }
            temp = 1;
        }
    }
    count = second_pos - first_pos + 1;
    min_max[0] = first_pos;
    min_max[1] = second_pos;
    return count;
}

void fill_array_3(int size, int** array) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            *(*(array + i) + j) = rand() % 10;
        }
    }
}

void fill_res_array(int size, int** array, int* res_array) {
    for (int i = 0; i < 5; i++) {
        *(res_array + i) = *(*(array + i) + i);
    }
}

void sort_array(int size, int* res_array) {
    int temp = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (*(res_array + i) < *(res_array + j)) {
                temp = *(res_array + j);
                *(res_array + j) = *(res_array + i);
                *(res_array + i) = temp;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int* array = malloc(SIZE * sizeof(int));
    fill_array_2(SIZE, array);

    int min_max[2] = { 0 };
    find_minmax_1(SIZE, array, min_max);
    int size_of_res = min_max[1] - min_max[0] + 1;
    int* res_arr = malloc(size_of_res * sizeof(int));

    fill_res_arr(array, res_arr, min_max[0], min_max[1]);
    free(res_arr);
    free(array);
    return 0;
}