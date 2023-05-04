#include "main.h"
/**
 * flip_bits - Count the number of bits to change
 * to get from one number to another
 * @n: First number.
 * @m: Second number.
 * Return: The number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, res = 0;
	unsigned long int nbits;
	unsigned long int num = n ^ m;

	for (j = 31; j >= 0; j--)
	{
		nbits = num >> j;
		if (nbits & 1)
			res++;
	}
	return (res);
}
