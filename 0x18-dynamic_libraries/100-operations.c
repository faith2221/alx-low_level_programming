#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - Sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: Integer result of operation.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts a num from another.
 * @a:first number.
 * @b: second number.
 * Return: Integer result of operation.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two numbers.
 * @a: first number.
 * @b: second number.
 * Return: Integer result of operation.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides a number by another.
 * @a: first number.
 * @b: second number.
 * Return: Integer result of operation.
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - returns  the remainder when a number
 * is divided by another.
 * @a: first number.
 * @b: second number.
 * Return: Integer result of operation.
 */

int mod(int a, int b)
{
	return (a % b);
}
