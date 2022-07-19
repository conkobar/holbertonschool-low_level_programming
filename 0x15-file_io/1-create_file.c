#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL-terminated string added to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (!filename)
		return (-1);

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (x < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[z])
			z++;

		y = write(x, text_content, z);

		if (y != z)
			return (-1);
	}

	close(x);

	return (1);
}
