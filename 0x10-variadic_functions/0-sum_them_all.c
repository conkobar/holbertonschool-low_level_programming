#include "variadic_functions.h"

/**
 * sum_them_all - adds all variables
 * @n: const int
 * Return: 0 if 0, otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(var, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(var, int);

	va_end(var);

	return (sum);
}
