#include "search_algos.h"

/**
 * binary_search - binarily (haha) finds desired index of array
 *
 * @array: array to be searched
 * @size: size of array
 * @value: desired index
 *
 * Return: desired index of -1
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = ((int)size - 1);

	return (rec_bin(array, start, end, value));
}

/**
 * printarr - print an array but fancy
 *
 * @array: given array
 * @start: where to print from
 * @end: where to print to
 */

void printarr(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
}

/**
 * rec_bin - recursively find index
 *
 * @array: given array
 * @start: where to begin searching
 * @end: where to end searching
 * @value: desired index
 *
 * Return: index or -1
 */

int rec_bin(int *array, int start, int end, int value)
{
	int mid = start + (end - start) / 2;

	if (end >= start)
	{
		printarr(array, start, end);
		if (value < array[mid])
			return (rec_bin(array, start, mid - 1, value));
		if (value > array[mid])
			return (rec_bin(array, mid + 1, end, value));
		return (mid);
	}
	return (-1);
}
