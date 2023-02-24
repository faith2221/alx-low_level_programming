#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long d, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (d = 1; d <= square; d++)
	{
		if (number % d == 0)
		{
			maxf = number / d;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
