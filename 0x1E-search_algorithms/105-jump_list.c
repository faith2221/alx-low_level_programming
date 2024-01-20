#include "search_algos.h"
/**
 * jump_list - Searching for an algorithm in a sorted singly linked list.
 * @list: Pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 * Return: If value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where value is located.
 * Description: Prints a value every time it is compared in the list.
 * Uses square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0, step_size = sqrt(size);
	listint_t *node, *jump;

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%ld]\n", jump->index,
				jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);
	for (; node->index < jump->index &&
			node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%ld]\n",
				node->index, node->n);
	printf("Value checked at index [%ld] = [%ld]\n", node->index,
			node->n);
	return (node->n == value ? node : NULL);
}
