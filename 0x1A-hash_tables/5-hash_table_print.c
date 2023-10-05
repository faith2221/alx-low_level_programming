#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int = 0;
	int f = 0;
	hash_node_t *curr;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (curr)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			f = 1;
			curr = curr->next;
		}
	}
	printf("}\n");
}
