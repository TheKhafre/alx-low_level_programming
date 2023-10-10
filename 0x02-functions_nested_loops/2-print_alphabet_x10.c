#include "main.h"

/**
 * print_alphabet_x10 - The function prints alphabet
 * in lowercase 10x
 * Return 0
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
