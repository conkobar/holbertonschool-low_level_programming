#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i] != '\0')
		i++;

	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
