#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - whatever
 *
 * Return: whatever
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int i = n % 10;

	printf("Last digit of %i is %i", n, i);
		if (i > 5)
			printf("and is greater than 5");
		if (i == 0)
			printf("and is zero");
		if ((i < 6) != 0)
			printf("and is less than 6");

	return (0);
}
