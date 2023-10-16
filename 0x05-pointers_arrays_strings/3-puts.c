#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: char array string type
 * Description: prints using _putchar function
 */

void _puts(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
