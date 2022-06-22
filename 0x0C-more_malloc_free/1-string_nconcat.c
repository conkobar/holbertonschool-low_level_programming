#include "main.h"

/**
 * string_nconcat - concats two strings
 * @s1: str1
 * @s2: str2
 * @n: bytes
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a, b, len1, len2;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	s3 = malloc(sizeof(char) * (len1 + n + 1));

	if (s3 == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		s3[a] = s1[a];

	for (b = 0; b < n; b++)
		s3[a + b] = s2[b];

	s3[a + b] = '\0';

	return (s3);
}
