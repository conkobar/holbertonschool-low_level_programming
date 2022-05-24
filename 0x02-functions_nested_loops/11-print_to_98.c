#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - idk
 * @n: idk
 * Return: idk
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%i, ", n++);
		putchar(10);
	}
	else if (n > 98)
	{
		printf("%i, ", n--);
		putchar(10);
	}
	else
	{
		printf("%i", n);
		putchar(10);
	}
}
