#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: pointer to the first int
 * @b: pointer to the second int
 * Return: 0 on success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
