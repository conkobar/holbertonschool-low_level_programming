#include "main.h"

/**
 * _puts - prints string with new line
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
	char[] arr = *str;

	while (arr++)
		_putchar(arr);
}
