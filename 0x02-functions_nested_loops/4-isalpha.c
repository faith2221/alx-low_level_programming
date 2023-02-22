#include "main.h"
/**
 * _isalphat - checks for alphabetic charecter
 *
 * @c: The character in ASCII code
 * Returns: 1 for letters. 0 for the rest
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n')
}
