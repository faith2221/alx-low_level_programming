#include "main.h"

int _sqrt(int n, int c);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - recurses to find the natural square root of a number
 * @n: number to calculate the square root
 * @c: iterator number
 * Return: the resulting square root
 */

int _sqrt(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (_sqrt(n, c + 1));
}
