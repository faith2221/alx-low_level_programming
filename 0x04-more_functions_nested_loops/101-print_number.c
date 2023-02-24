#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: The integer to prints.
 * Return: Nothing!
 */

void print_number(int n)
{
	unsigned int z = n;

	if (n < 0)
	{
		n *= -1;
		z = n;
		_putchar('-');
	}
	z /= 10;
	if (z != 0)
	print_number(z);
	_putchar((unsigned int) n % 10 + '0');
}
