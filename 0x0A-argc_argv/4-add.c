#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, n, sum;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i]; i++)
		{
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}

	printf("%d\n", sum);
	return (0);
}
