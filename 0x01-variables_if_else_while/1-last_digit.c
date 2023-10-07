#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if the last digit of
 * number generated is greater or lesser than 5/6
 * Return: 0
 */

int main(void)
{
	int n;
	int my_mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	my_mod = n % 10;

	if (my_mod > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, my_mod);
	else if (my_mod == 0)
		printf("Last digit of %i is %i and is 0\n", n, my_mod);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, my_mod);
	return (0);
}
