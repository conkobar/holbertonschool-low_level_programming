#include "main.h"

/**
 * print_diagonal - code
 * @n: int
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;

	for (n = n; n > 1; n--)
	{
		i = n + 0;
		for (i = i; i > 1; i--)
			_putchar(32);
		if (i == 1)
			_putchar(92);
		_putchar(10);
	}
}
