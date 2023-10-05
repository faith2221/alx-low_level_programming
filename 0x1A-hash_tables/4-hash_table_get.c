#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in hash table.
 * @ht: the hash table.
 * @key: The key to search.
 * Return: The value associated with the key.
 * Or NULL if the key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *curr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *key)kwy, ht->size);

	curr = ht->array[i];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
