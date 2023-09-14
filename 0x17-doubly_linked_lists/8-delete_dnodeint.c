#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a linked list.
 * @head: The pointer.
 * @index: Index of the node to delete.
 * Return: 1 if successful, otherwise -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
			curr->next->prev = NULL;
		free(curr);
		return (1);
	}
	i = 0;
	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
		return (-1);
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	if (curr->prev != NULL)
		curr->prev->next = curr->next;

	free(curr);
	return (1);
}
