#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string
 * @str: char
 * Return: 0
 */

void puts2(char *str)
{
	int i, len;
	
	len = _strlen(str);
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
