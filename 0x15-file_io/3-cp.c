#include "main.h"

/**
 * main - copies content of a file to another file
 * @ac: argument count
 * @av: arguments
 * Return: 0
 */

int main(int ac, char *av[])
{
	int fdr, fdw, r, x, y;
	char *bufr = malloc(1024);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(av[1], O_RDONLY);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdw = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fdr, bufr, BUFSIZ)) > 0)
	{
		if (fdw < 0 || write(fdw, bufr, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fdr);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	x = close(fdr);
	y = close(fdw);
	if (x < 0 || y < 0)
	{
		if (x < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	free(bufr), return (0);
}
