#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Instruction: the standard libraries must be avoided.
 * Return: 0
 */

int main(void)
{
	char pp[] = "_putchar";
	int i = 0;

	/*while (pp[i] != '\0')
	{
		_putchar(pp[i]);
		i++;
	}
	_putchar('\n');*/

	for (i = 0; pp[i] != '\0'; i++)
	{
		/* code */
		_putchar(pp[i]);
	}

	_putchar('\n');
	
	return (0);
}
