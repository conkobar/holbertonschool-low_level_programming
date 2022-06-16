#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars & initializes it with char
 * @size: size
 * @c: char
 * Return: NULL if size = 0 or it fails, else a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0 || arr == NULL)
		return ('\0');

	arr = (char *) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		c = arr[i];

	return (arr);
}
