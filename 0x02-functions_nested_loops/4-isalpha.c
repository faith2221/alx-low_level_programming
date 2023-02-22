#include "main.h"
/**
 * _isalphat - checks for alphabetic charecter.
 * Shows 1 if the input is a
 * letter Another cases, show 0
 *
 * @c: The character in ASCII code
 * Returns: 1 for alphabetic character or 0 for anything else
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
	putchar('\n');
	return (1);
}
