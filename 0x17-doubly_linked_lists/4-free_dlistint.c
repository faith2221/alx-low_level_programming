#include "lists.h"

/**
 * free_dlistint - Frees a list.
 * @head: The pointer.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head == NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
