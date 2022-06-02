#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array or ints followed by a new line
 * @a: int
 * @n: number of array elements to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			printf(", ");
	}

	_putchar(10);
}
