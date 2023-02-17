#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase
 * and the in uppercase, follow by a new line
 * Return: Always 0 (success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
