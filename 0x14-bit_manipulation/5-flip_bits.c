#include "main.h"

/**
 * flip_bits - returns numbwer of bits to flip to get new number
 * @n: 1st num
 * @m: 2nd num
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int orange, green = n ^ m;
	int i;

	for (i = 63; i >= 0; i--)
	{
		orange = green >> i;
		if (orange & 1)
			count++;
	}

	return (count);
}
