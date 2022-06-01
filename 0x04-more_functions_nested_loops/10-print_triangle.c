#include "main.h"

/**
 * print_triangle - code
 * @size: int
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
				_putchar(32);

			for (y = 1; y <= 1; y++)
				_putchar(35);

			_putchar(10);
		}
	}

	else
		_putchar(10);
}
