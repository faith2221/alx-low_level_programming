#include "main.h"
/**
 * _islower -> checks if the character is lowercase
 * @c: a character argument
 * Returns: returns 1 and 0 depending on condition
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
