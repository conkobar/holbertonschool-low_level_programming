#include "main.h"

/**
 * print_last_digit - idk
 * @i: idk
 * Return: idk
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
	{
		n = i * -1;
		return (n % 10);
	}
	else
		return (i % 10);
}
