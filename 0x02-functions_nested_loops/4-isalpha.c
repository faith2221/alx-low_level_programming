#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * in the standard "C",
 * it is equvalent to (isupper(c) || islower(c)).
 *
 * @c: The character in the ASCII code
 * Return: 1 for letters. 0 for the rest
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
}
