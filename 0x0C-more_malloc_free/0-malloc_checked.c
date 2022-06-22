#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: bytes
 * Return: mem
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
