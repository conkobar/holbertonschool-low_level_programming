#include "main.h"

/**
 * print_square - code
 * @size: int
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y != size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
