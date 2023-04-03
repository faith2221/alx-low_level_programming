#include "lists.h"
/**
 * listint_len - prints the length of listint_t list.
 * @h: pointer to the structure
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
