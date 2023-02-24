#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * For multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: always 0 (success)
 */

int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if ((y % 3 == 0) && (y % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (y % 3 == 0)
		{
			printf("Fizz");
		}
		else if (y % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", y);
		}
		if (y != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
