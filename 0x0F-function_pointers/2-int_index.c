#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array
 * @size: elements in array
 * @cmp: ptr to function comparing values
 * Return: first element to return !0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
