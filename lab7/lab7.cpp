
#include <stdio.h>
#include <stdarg.h>
#include <cmath>
#include <iostream>

int findPairs(int numberОfparameters, ...)
{
    int result = 0;
    va_list parametrs;
    va_start(parametrs, numberОfparameters);

    int* arr = new int[numberОfparameters];
    for (int i = 0; i < numberОfparameters; ++i)
    {
        arr[i] = va_arg(parametrs, int);
    }
    for (int i = 0; i < numberОfparameters - 1; i++) {
        if (arr[i] < arr[i + 1])
            result++;
    }
    va_end(parametrs);

    return result;
}

int main()
{
    int result = findPairs(10, 5, 11,12,1,51);
    printf("%d \n", result);
    return 0;
}

