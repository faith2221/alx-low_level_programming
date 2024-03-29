#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table of a function.
 * @ht: The hash table to be deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *curr, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			temp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = temp;
		}

	}
	free(ht->array);
	free(ht);
}
