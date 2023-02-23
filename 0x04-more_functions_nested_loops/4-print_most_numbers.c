#include "main.h"
/**
 * print_most_numbers - print the numbers since 0 to 9
 * Description: prints the numbers excluding 2 and 4
 * Returns: the numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int y = 0;

	for (; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}
