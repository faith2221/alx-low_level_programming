#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array of integers.
 * @array: array
 * @size: The size of the array
 * @cmp: A pointer to the function to be used to compare values.
 * Return: If no element matches or size <= 0 - -1
 * Otherwise - The index of the first element for which
 * the cmp fuction does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a])!= 0)
			return (a);
	}
	return (-1);
}
