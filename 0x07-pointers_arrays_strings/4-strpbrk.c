#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: *s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; *s != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
			{
				return (s);
			}
		}

		s++;
	}

	return (0);
}
