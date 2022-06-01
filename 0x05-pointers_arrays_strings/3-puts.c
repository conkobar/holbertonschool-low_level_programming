#include "main.h"

/**
 * _puts - prints string with new line
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(str);
		str++;
	}
	_putchar(10);
}
