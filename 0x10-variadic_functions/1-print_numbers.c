#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string printed between numbers
 * @n: number of ints
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list var;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	putchar(10);

	va_end(var);
}
