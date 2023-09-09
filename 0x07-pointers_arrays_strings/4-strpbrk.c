#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * Return: number of matches.
 * @s: String to test.
 * @accept: Array to test.
 *
 * to the pointer I add the positions that I have traveled.
 * Author: Jeremias Erba.
*/

char *_strpbrk(char *s, char *accept)
{
	int countS, countAccept;

	for (countS = 0; s[countS] != '\0'; countS++)
	{
		for (countAccept = 0; accept[countAccept] != '\0'; countAccept++)
		{
			if (s[countS] == accept[countAccept])
			{
				return (s + countS);
			}
			if (s[countS] == 0)
			{
				return (s + countS);
			}
		}
	}
	return (0);
}
