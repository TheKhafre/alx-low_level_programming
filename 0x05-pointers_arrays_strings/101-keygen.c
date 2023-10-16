#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int rand_check;
	int count = 0;
	int total = 2772;

	srand(time(NULL));
	while (total > 122)
	{
		rand_check = (rand() % 125) + 1;
		printf("%c", rand_check);
		total -= rand_check;
		count++;
	}
	printf("%c", total);

	return (0);
}
