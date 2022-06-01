#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: char
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	while (len--)
	{
		s--;
		_putchar(*s);
	}

	_putchar(10);
}
