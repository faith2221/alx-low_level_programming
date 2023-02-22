#include "main.h"
/**
 * print alphabet -> print the lowercase alphabets
 * Returns: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
