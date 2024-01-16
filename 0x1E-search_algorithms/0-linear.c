#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers.
 * @array: Input array
 * @size: Size of the array
 * @value: The value to search in.
 * Return: Always EXIT SUCCESS.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
