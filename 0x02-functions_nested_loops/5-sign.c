#include "main.h"

/**
 * print_sign - Function Prototype
 * @n: checks for positive or negative value
 * Description: print +, 0, or - depending on value
 * Return: 1 if positive, -1 if negative and 0 if null
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
