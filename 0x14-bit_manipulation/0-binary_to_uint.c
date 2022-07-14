#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary
 * Return: converted int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec = (2 * dec) + (b[i] - '0');
	}

	return (dec);
}
