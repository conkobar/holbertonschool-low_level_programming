#include "main.h"

/**
 * clear_bit - clears bit at index
 * @n: bit
 * @index: index
 * Return: 1 on success, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
