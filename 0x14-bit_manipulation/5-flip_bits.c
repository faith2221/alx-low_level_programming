#include "main.h"
/**
 * flip_bits - Count the number of bits to change
 * to get from one num to another.
 * @n: First num.
 * @m: Second num.
 * Return: The num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	for (num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}
	return (num);
}
