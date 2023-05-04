#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Input long integer.
 * @index: Index to start at.
 * Return: The value of the bit at index or
 * -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int j;

	if (index > 31)
		return (-1);
	j = (n >> index) & 1;
	return (j);
}
