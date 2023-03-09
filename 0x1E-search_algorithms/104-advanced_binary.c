#include "search_algos.h"

/**
 * advanced_binary - solves issues of not returning correct value if
 * that value appears more than once in the given array
 *
 * @array: given array
 * @size: size of given array
 * @value: value to find
 *
 * Return: int
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
	{
		return (-1);
	}

	return (binary_recursion(array, value, 0, (int)size - 1));
}

/**
 * binary_recursion - recursively searches array for index
 *
 * @array: given array to search
 * @value: value to search for
 * @left: left half of the array
 * @right: right half of the array
 *
 * Return: int
 */
int binary_recursion(int *array, int value, int left, int right)
{
	int mid = 0;

	if (right >= left)
	{
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			printArray(array, left, right);
			if (array[mid - 1] == value)
				return (binaryRec(array, value, left, mid));

			return (mid);
		}

		if (array[mid] > value)
		{
			printArray(array, left, right);
			return (binaryRec(array, value, left, mid - 1));
		}

		else
		{
			printArray(array, left, right);
			return (binaryRec(array, value, mid + 1, right));
		}
	}
	/* element not present, return -1 */
	return (-1);
}

/**
 * print_array - prints stylized array
 *
 * @array: given array
 * @low: given starting point
 * @high:  given end point
 */
void print_array(int *array, int low, int high)
{
	printf("Searching in array: ");

	while (low <= high)
	{
		printf("%d", array[low]);

		if (low != high)
			printf(", ");

		low++;
	}

	putchar(10);
}
