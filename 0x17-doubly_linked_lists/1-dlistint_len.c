#include "lists.h"

/**
 * dlistint_len - It returns the number of elements of a linked list.
 * @h: The pointer.
 * Return: Number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
