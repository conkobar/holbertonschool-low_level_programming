#include "main.h"

/**
 * print_most_numbers - code
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	while (i++)
	{
		if ((i >= 0 && i < 10) && (i != 2 || i != 4))
		_putchar(i);
	}
	_putchar(10);
}
