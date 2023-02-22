#include "search_algos.h"

/**
 * linear_search - linearly finds desired index of array
 * @array: array to be searched
 * @size: size of array
 * @value: desired index
 *
 * Return: desired index of -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
