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

/* LINEAR SKIP */

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
