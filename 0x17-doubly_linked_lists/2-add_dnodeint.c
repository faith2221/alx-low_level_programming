#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list.
 * @head: The pointer.
 * @n: Data to be stored in the new node.
 * Return: The address of new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;
	return (newNode);
}
