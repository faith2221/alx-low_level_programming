#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to change.
 * @index: Index of a bit to clear.
 * Return: 1 for success,or -1 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
