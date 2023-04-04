#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 * @head: pointer to a pointer
 * @index: position of node to delete
 * Return:1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *new;

	if (!(*head))
		return (-1);
	i = 0;
	new = NULL;
	temp = *head;
	if (!index)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			new->next = temp->next;
			free(temp);
			return (1);
		}
		new = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
