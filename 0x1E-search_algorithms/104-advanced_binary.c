#include "search_algos.h"

/**
 * recursive_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @l: left index
 * @r: right index
 * @value: value to search for
 * Return: first index where value is located. -1 if not found
 */
int recursive_binary(int *array, size_t l, size_t r, int value)
{
	size_t i;

	if (r < l)
		return (-1);

	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = (l + r) / 2;
	if (array[i] == value && array[i - 1] != value)
		return (i);
	if (array[i] >= value)
		return (recursive_binary(array, l, i, value));

	return (recursive_binary(array, i + 1, r, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
