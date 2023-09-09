#include "main.h"

/**
 * _strstr - Write a function that locates a substring..
 *
 * Return: number of matches.
 * @haystack: String to test.
 * @needle: Array to test.
 *
 * Author: Jeremias Erba.
*/

char *_strstr(char *haystack, char *needle)
{
	int slots;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		slots = 0;

		if (haystack[slots] == needle[slots])
		{
			while (haystack[slots] == needle[slots])
			{
				if (needle[slots + 1] == '\0')
				{
					return (haystack);
				}
				slots++;
			}
		}
		haystack++;
	}
	return (0);
}
