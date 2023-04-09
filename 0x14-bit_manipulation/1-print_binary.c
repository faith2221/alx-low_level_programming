#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print to binary
 */

void print_binary(unsigned long int n)
{
	int i, num;

	if (n == 0)
		_putchar('0');
	for (num = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			num = 1;
		if (num == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
