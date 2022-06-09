#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squirt_r(n, 0));
}

/**
 * squirt_r - helps find square root
 * @n: int
 * @i: int
 * Return: square root
 */

int squirt_r(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (squirt_r(n, i + 1));
}
