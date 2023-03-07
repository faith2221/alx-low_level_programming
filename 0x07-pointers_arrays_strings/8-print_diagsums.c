#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int index1, index2, x;

	index1 = 0;
	index2 = 0;

	for (x = 0; x < size; x++)
	{
		index1 = index1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		index2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", index1, index2);
}
