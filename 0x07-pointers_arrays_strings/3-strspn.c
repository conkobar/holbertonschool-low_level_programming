#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: string
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, m;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				m = 1;
			}
		}

		if (m == 0)
		{
			return (k);

		}
	}

	return (0);
}
