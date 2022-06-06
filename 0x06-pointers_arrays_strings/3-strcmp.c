#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char
 * @s2: char
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
		return (15);

	else if (s1 < s2)
		return (-15);

	else
		return (0);
}
