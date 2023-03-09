#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* PROTOTYPES */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printarr(int *array, int start, int end);
int rec_bin(int *array, int start, int end, int value);

/* ADVANCED */

int advanced_binary(int *array, size_t size, int value);
int binary_recursion(int *array, int value, int left, int right);
void print_array(int *array, int low, int high);

#endif
