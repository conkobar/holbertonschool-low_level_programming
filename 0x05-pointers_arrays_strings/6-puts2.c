#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: char
 * Return: 0
 */

void puts2(char *str)
{
	while (*str)
	{
		if (*str % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar(10);
}
