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

	printf("Last digit of %i is %i ", n, n % 10);
		if (n % 10 > 5)
			printf("and is greater than 5\n");
		else if (n % 10 == 0)
			printf("and is zero\n");
		else if (n % 10 < 6 && n % 10 != 0)
			printf("and is less than 6\n");

	return (0);
}
