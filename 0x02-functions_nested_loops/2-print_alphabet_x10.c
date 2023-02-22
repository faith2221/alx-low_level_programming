#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase
 * Returns: void
 */

void print_alphabet_x10(void)
{
	int c;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
