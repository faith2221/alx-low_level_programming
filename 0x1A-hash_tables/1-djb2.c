#include "hash_tables.h"

/**
 * hash_djb2 - Function that implements the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int count;

	while ((count = *str++))
	{
		hash = ((hash << 5) + hash) + count;
	}
	return (hash);
}
