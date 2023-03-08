#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int fact = 0;

	if (*s)
	{
		fact++;
		fact += _strlen_recursion(s + 1);
	}
	return (fact);
}
