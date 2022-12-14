#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - this function checks whether a random number assigned to n
* is either positive or otherwise negative
* Return: this function returns 0 if successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
