#include "main.h"

/**
 * print_diagonal - code
 * @n: int
 * Return: 0
 */
void print_diagonal(int n)
{
	int l, s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{

			for (s = 0; s < l; s++)
				_putchar(32);

			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
