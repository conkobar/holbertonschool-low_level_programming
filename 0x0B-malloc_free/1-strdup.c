#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to memory of given string
 * @str: string
 * Return: pointer to str, null if error
 */

char *_strdup(char *str)
{
	char *dupe;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)

	dupe = malloc(sizeof(char) * (len + 1));

	if (dupe == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dupe[i] = str[i];

	return (dupe);
}
