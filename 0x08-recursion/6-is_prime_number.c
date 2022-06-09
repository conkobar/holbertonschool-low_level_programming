#include "main.h"

/**
 * prime_r - prime # recursion
 * @i: int
 * @j: int
 * Return: 1 if int is prime, else 0
 */

int prime_r(int i, int j)
{
	if (j == 1)
		return (1);

	if (i % j == 0 && j > 0)
		return (0);

	return (prime_r(i, j - 1));
}

/**
 * is_prime_number - identifies prime numbers
 * @n: int
 * Return: 1 if int is prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_r(n, n - 1));
}
