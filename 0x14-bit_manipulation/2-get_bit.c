#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: input long integer
 * @index: index to start at
 * Return: the value of the bit at index index or
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 31)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
