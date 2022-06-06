#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;
	int i = 0;

	while (dest++)
		i++;

	*ptr = dest + i;

	while (*src != '\0')
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
