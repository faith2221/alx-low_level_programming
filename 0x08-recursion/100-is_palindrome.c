#include "main.h"

int _strlen_recursion(char *s);
int check_pal(char *s, int x, int len);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the character recursively for palindrome
 * @s: string to check
 * @x: iterator number
 * @len: length of the string
 * Return: 1 if it is, 0 if not
 */

int check_pal(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (check_pal(s, x + 1, len - 1));
}
