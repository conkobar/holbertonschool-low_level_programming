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
		if (n > 0)
			printf("%i is positive");
		else if (n == 0)
			printf("%i is zero");
		else
			printf("%i is negative");

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
