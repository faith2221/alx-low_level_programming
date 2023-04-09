#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of a bit to clear
 * Return: 1 for success, or -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
