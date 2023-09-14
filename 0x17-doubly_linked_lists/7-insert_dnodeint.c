#include "lists.h"

/**
 * *insert_dnodeint_at_index - Inserts a new node.
 * @h: A pointer.
 * @idx: The index to insert new node.
 * @n: The information to be stored.
 *
 * Return: Address of new node.
 * Otherwise NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr, *new;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	curr = *h;
	i = 0;
	while (curr != NULL && i < idx - 1)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = curr;
	new->next = curr->next;

	if (curr->next != NULL)
		curr->next->prev = new;
	curr->next = new;
	return (new);
}
