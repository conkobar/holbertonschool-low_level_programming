#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of given file
 * @letters: letters
 * Return: 0 if given null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufr = malloc(sizeof(char) * letters);
	int x, y, z;

	if (!bufr || !filename)
		return (0);

	x = open(filename, O_RDONLY);
	if (x < 0)
		return (0);

	y = read(x, bufr, letters);
	if (y < 0)
	{
		free(bufr);
		return (0);
	}

	bufr[y] = '\0';

	close(x);

	z = write(STDOUT_FILENO, bufr, y);
	if (z < 0)
	{
		free(bufr);
		return (0);
	}

	free(bufr);
	return (z);
}
