#include "main.h"

/**
 * get_bit - returns value of a bit at an index
 * @n: value of bit
 * @index: index
 * Return: value of bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n = n >> index;

	return (1 & n);
}
