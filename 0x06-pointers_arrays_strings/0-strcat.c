#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *i;

	while (*dest && *src)
	{
		dest++;
		src++;
	}

	dest--;
	*i = dest + src;
	return (*i);
}
