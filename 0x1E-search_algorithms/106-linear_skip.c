#include "search_algos.h"
/**
 * linear_skip - Searches a value contained in a skip list.
 * Assumes a list with sorted values and a single skip layer with nodes
 * at every index which is a multiple od the square root of the size of list.
 * @list: Pointer to the head of the skip list reverse.
 * @value: The value to search for.
 * Return: Pointer on the first node where value is located.
 * Or NULL id list is NULL or value not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = NULL, *stp = NULL;

	if (!list)
		return (NULL);
	tmp = list;
	while (tmp && tmp->express && tmp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				tmp->express->index, tmp->express->n);
		tmp = tmp->express;
	}
	stp = tmp;
	while (stp && stp->next != stp->express)
		stp = stp->next;
	if (tmp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				tmp->express->index, tmp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
				tmp->index, tmp->express->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
				tmp->index, stop->index);
	while (tmp != stp && tmp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
			tmp->index, tmp->n);
	if (tmp == stp)
		return (NULL);
	return (tmp);
}
