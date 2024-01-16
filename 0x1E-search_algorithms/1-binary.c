#include "search_algos.h"
/**
 * binary_search - Searches for a value in an integer array.
 * @array: Pointer to the first element of array search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: value if not present.
 * Or -1 if array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int start, mid, end;
	int y;

	if (array == NULL)
	{
		return (-1);
	}

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (y = start; y <= end; y++)
			printf("%i%s", array[y], y == end ? "\n" : ", ");

		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
