#include "main.h"

/**
 * set_bit - sets the value of a bit at index to 1
 * @n: bit
 * @index: index
 * Return: 1 if success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
