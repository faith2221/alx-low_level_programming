#include "hash_tables.h"

/**
 * key_index - Computes the index of a key.
 * @key: The key.
 * @size: The size of the array of a hash table.
 * Return: The index at which the key should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
