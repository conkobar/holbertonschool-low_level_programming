#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: char
 * Return: 0
 */

void rev_string(char *s)
{
	int len, i;
	char *beg, *end, temp;

	len = _strlen(s);
	beg = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *beg;
		*beg = temp;

		beg++;
		end--;
	}
}
