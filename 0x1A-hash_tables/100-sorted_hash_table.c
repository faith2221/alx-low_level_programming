#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array.
 * Return: A pointer to the created hash table.
 * Or NULL if failed.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * insert_sorted_node - Inserts a node into the linked list.
 * @ht: The sorted hash table
 * @new_node: The node to be inserted.
 */

void insert_sorted_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *curr = ht->shead;
	shash_node_t *prev = NULL;

	if (curr == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->snext = NULL;
		new_node->sprev = NULL;
		return;
	}
	while (curr != NULL && strcmp(curr->key, new_node->key))
	{
		prev = curr;
		curr = curr->snext;
	}
	if (prev == NULL)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		prev->snext = new_node;
		new_node->sprev = prev;
		new_node->snext =curr;
		if (curr != NULL)
			curr->sprev = new_node;
		else
			ht->stail = new_node;
	}
}

/**
 * shash_table_set - Insert a key/value pair into the sorted hash table.
 * @ht: The sorted hash table to insert into.
 * @key: The key(string).
 * @value: The value corresponding to the key.
 * Return: 1 success, otherwise 0.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node;

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	insert_sorted_node(ht, new_node);

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key in hash table.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 * Return: The value associated with the key, or NULL if not found.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *curr;

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table.
 * @ht: The sorted hash table to print.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	curr = ht->shead;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if (curr->next != NULL)
			printf(", ");
		curr = curr->next;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order.
 * @ht: The sorted hash_table to print in reverse.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	curr = ht->stail;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if (curr->sprev != NULL)
			printf(", ");
		curr = curr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table.
 * @ht: The sorted hash table to delete.
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *curr, *temp;

	curr = ht->array[i];
	temp = curr;
	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (curr != NULL)
		{
			curr = curr->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
