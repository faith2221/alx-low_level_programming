#include "lists.h"

/**
 * *get_dnodeint_at_index - Returns the nth node of a list.
 * @head: The pointer.
 * @index: the index to retrieve.
 * Return: The pointer of the nth node.
 * If it does not exist NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	curr = head;
	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}
	if (i == index)
	{
		return (curr);
	}
	else
	{
		return (NULL);
	}
}
