#include "main.h"

/**
 * more_numbers - code
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, n;

	n = 0;
	while (n < 11)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar(10);
		n++;
	}
}
