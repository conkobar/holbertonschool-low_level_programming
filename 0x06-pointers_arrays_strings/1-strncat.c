#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int *i = 0;

	while (*dest++)
		*i++;

	*ptr = dest + *i;

	while (*src != '\0' && n--)
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
