#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: the standard libraries should not be used.
 * Return: 0
 */

int main(void)
{
	char pp[] = "_putchar";
	int i = 0;

	for (i = 0; pp[i] != '\0'; i++)
	{
		_putchar(pp[i]);
	}

	_putchar('\n');

	return (0);
}
