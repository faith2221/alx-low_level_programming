#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer tot the head pointer
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int node = 0;
	listint_t *i;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	node = temp->n;
	i = temp->next;
	free(temp);
	*head = i;
	return (node);
}
