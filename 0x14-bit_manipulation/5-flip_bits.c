#include "main.h"
/**
 * flip_bits - Count the number of bits to change
 * to get from one number to another
 * @n: First number.
 * @m: Second number.
 * Return: The number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned int long m)
{
	unsigned int num;

	for (num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}
	return (num);
}
