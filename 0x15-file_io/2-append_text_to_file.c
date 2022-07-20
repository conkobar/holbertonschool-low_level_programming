#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: string to add
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);
	if (x < 0)
		return (-1);

	if (text_content)
	{
		for (y = 0; text_content[y]; y++)
			;

		z = write(x, text_content, y);

		if (z != y)
			return (-1);
	}
	close(x);

	return (1);
}
