#include "search_algos.h"

/**
 * min - Returns the minimum of two size_t values.
 * @a: First value
 * @b: Second value
 *
 * Return: a if lower or equal to b, otherwise b
 */

size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search -  Searches for a value in a sorted array of integers.
 * @array: Pointer to first element of array search
 * @size: Number of elements in array.
 * @value: Value to search for
 *
 * Return: first index containing value.
 * Or -1 if value not found or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump;

	if (!array || size == 0)
		return (-1);
	jump = sqrt(size);
	for (end = 0; end < size && array[end] < value;
			start = end, end += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
				end, array[end]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (; start <= min(end, size - 1); start++)
	{
		printf("Value checked array[%lu] = [%d]\n", start,
				array[start]);
		if (array[start] == value)
			return (start);
	}
	return (-1);
}
