#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - The program uses the stdlib rand()
 * to assign a random number and return if the
 * number is positive or negative
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
