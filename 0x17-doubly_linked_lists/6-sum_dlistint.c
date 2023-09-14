#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data.
 * @head: The pointer.
 * Return: Sum of all in a list.
 * Otherwise 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
