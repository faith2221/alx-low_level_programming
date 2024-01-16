#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array.
 * @array: Pointer to first element of array to search.
 * @size: Number of elements in array
 * @value: Value to search for.
 *
 * Return: First index containing value.
 * Or -1 if value not found or array is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t old = 0;
	size_t new = size - 1;
	size_t pos;

	if (!array)
		return (-1);
	while ((array[new] != array[old]) && (value >= array[old])
			&& (value <= array[new]))
	{
		pos = old + (((double)(new - old) / (array[new] - array[old]))
				* (value - array[old]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			old = pos + 1;
		else if (value < array[pos])
			new = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", old, array[old]);
		return (old);
	}
	pos = old + (((double)(new - old) / (array[new] - array[old]))
			* (value - array[old]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
