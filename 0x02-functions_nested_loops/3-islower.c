#include "main.h"

/**
 * _islower - the function checks for lowercase character.
 * @c: checks for valid character letter
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
