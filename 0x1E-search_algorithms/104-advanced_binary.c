#include "search_algos.h"

/**
 * binary_search_recursion - Helper to advanced binary.
 * Recursively search for a value in an integer value.
 * @array: Pointer to first element of array to search.
 * @value: Value to search for.
 * @low: Starting index in array.
 * @high: Ending index in array.
 * Return: The index containng value.
 * Or -1 if value not found or array is NULL.
 */
int binary_search_recursion(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");
	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
						mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
						low, mid));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * Uses a binary search algorithm and consistently returns first appearance
 * of value in array.
 * @array: Pointer to the first element of array to search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index containing value.
 * Or -1 if value not for or array is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t old = 0;
	size_t new = size - 1;

	if (!array)
		return (-1);
	return (binary_search_recursion(array, value, old, new));
}
