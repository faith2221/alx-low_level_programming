#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int sum;

	if (*needle == 0)
		return (haystack);

	while  (*haystack)
	{
		sum = 0;

		if (haystack[sum] == needle[sum])
		{
			do {
				if (needle[sum + 1] == '\0')
					return (haystack);
				sum++;

			} while (haystack[sum] == needle[sum]);
		}
		haystack++;
	}
	return ('\0');
}
