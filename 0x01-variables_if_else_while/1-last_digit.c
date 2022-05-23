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
	printf("Last digit of %i is ", n);
	if ((n % 10) > 5)
		printf("and is greater than 5");
	if ((n % 10) == 0)
		printf("and is zero");
	if (((n % 10) < 6) != 0)
		printf("and is less than 6");
	return (0);
}
