#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - idk
 * @n: idk
 * Return: idk
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n++);

		if (n == 98)
			printf("98");
	}
}
