#include "search_algos.h"

/**
 * min - Returns the minimum of two size_t values.
 * @a: First value.
 * @b: The second value.
 * Return: a if lower or equal to b, b otherwise.
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - It searches for a value in an integer array.
 * @array: Pointer to the first element of array search.
 * @value: Value to search for.
 * @low: The starting index.
 * @high: The ending index.
 *
 * Return: Index containing value.
 * Or -1 if value not found or array is NULL.
 */
int binary_search_helper(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of array to search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index containing value.
 * Or -1 if value not found or array is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t old, new, res = 1;

	if (!array || size == 0)
		return (-1);
	while (res < size && array[res] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", res, array[res]);
		res *= 2;
	}
	old = res / 2;
	new = min(res, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", old, new);
	return (binary_search_helper(array, value, old, new));
}
