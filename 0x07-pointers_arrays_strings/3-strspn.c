#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * Return: number of matches.
 * @s: string character.
 * @accept: string to test.
 *
 * Author: Jeremias Erba.
 */

unsigned int _strspn(char *s, char *accept)
{
	int countS, countAccept;
	int countMatches = 0;

	for (countS = 0; s[countS] != '\0'; countS++)
	{
		if (s[countS] != 32)
		{
			for (countAccept = 0; accept[countAccept] != '\0'; countAccept++)
			{
				if (s[countS] == accept[countAccept])
				{
					countMatches++;
				}
			}
		}
		else
		{
			return (countMatches);
		}
	}
	return (countMatches);
}

