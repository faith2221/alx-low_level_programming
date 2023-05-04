#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: Pointer to a string of 0 and 1 chars
 * Return: Converted number
 * 0 if b is NULL
 * One or more chars in the string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int j = 0;

	if (b == NULL)
		return (0);
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		num <<= 1;
		num += b[j] - '0';
		j++;
	}
	return (num);
}
