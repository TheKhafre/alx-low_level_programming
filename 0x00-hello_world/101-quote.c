#include <stdio.h>
#include <unistd.h>

/**
 * main - output given string to the standard error.
 * this works by using the write function that takes 2 as value
 * Return: 0 on Success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
