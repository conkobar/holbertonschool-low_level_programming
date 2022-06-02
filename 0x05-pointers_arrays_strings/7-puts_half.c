#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 * @str: char
 * Return: 0
 */

void puts_half(char *str)
{
	int i, len, mid;

	while (str++)
		len++;

	if (len % 2 == 0)
		mid = len / 2;

	else
		mid = (len + 1) / 2;

	for (i = mid; i < len; i++)
		_putchar(str[i]);

	_putchar(10);
}
