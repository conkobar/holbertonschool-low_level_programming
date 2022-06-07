#include "main.h"

/**
 * cap_string - capitalizes first letter of every word in a string
 * @s: char
 * Return: 0
 */

char *cap_string(char *s)
{
	int i, j;
	char sp[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = o; j < 13; j++)
		{
			if (s[i] == sp[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
