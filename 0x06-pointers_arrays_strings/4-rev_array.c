#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: int
 * @n: int
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int j = n - 1, i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
