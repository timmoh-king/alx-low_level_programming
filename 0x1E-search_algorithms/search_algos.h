#ifndef ALGOS_HEADER
#define ALGOS_HEADER
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
