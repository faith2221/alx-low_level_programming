#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print to binary
 */

void print_binary(unsigned long int n)
{
	int j, num;

	if (n == 0)
		_putchar('0');
	for (num = 0, j = sizeof(n) * 8 - 1; j >= 0; j--)
	{
		if ((n >> j) & 1)
			num = 1;
		if (num == 1)
			((n >> j) & 1) ? _putchar('1') : _putchar('0');
	}
}
