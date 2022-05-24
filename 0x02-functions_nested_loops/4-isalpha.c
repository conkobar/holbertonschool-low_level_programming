#include "main.h"

/**
 * _isalpha - idk
 * @c: idk
 * Return: idk
 */

int _isalpha(int c)
{
	if (c >= 'a' && c >= 'A' && c <= 'z' && c <= 'Z')
		return (1);
	else
		return (0);
}
