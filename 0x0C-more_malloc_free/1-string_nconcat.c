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
	unsigned int i, len1, len2, *junk;

	len1 = 0;
	len2 = 0;
	junk = malloc(5);

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

	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - len1];
	}
	s3[i] = '\0';
	free(junk);
	return (s3);
}
