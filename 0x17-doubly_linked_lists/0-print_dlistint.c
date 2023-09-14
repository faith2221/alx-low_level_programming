#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list.
 * @h: The pointer to the head.
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		temp++;
	}
	return (temp);
}
