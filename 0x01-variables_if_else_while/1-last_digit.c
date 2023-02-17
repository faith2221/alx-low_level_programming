#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	num = n % 10;
	if (num > 5)
		printf("num digit of %i is %i and is greater than 5\n", n, num);
	else if (num == 0)
		printf("num digit of %i is %i and is 0\n", n, num);
	else if (num < 6)
		printf("num digit of %i is %i and is less than 6 and not 0\n", n, num);
	return (0);
}
