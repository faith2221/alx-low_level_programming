#include "main.h"
/**
 * more_numbers - print 10 times the numbers since 0 up to 10
 * Return: 10 times of the numbers since 0 to 14
 */

void more_numbers(void)
{
	int e, f;

	for (e = 0; e < 10; e++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f > 9)
			{
				_putchar((f / 10) + '0');
			}
			_putchar((f % 10) + '0');
		}
		_putchar('\n');
	}
}
