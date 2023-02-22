#include "main.h"
/**
 * _islower -> checks for a lowercase character 
 * Shows 1 if the input is a
 * lowercase character. Another case, shows
 * 0
 *
 * @c: The character is in ASCII code
 * Returns: returns 1 for lowercase character. 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
        {
		return (1);
	}
	else
	{
		return (0);
	}

}
