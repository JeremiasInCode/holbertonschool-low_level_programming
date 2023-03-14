#include "main.h"

/**
 * string_nconcat - Concat two trings until that n is less than n.
 *
 * @s1: First char pointer.
 * @s2: Second char pointer.
 * @n: limit
 * Return: Memory dinamic of char type.
 *
 * Author: Jeremias Erba.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int countS1 = 0, countS2 = 0, iterator = 0, newIterator = 0;
	char *space = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (countS1 = 0; s1[countS1]; countS1++)
		;
	for (countS2 = 0; s2[countS2]; countS2++)
		;

	space = (char *)malloc((countS1 + n + 1));
	if (space == NULL)
		return (NULL);

	for (iterator = 0; iterator < (countS1 + n); iterator++)
	{
		if (iterator < countS1)
			space[iterator] = s1[iterator];
		else if (iterator >= countS1)
		{
			space[iterator] = s2[newIterator];
			newIterator++;
		}
	}
	space[iterator] = '\0';
	return (space);
}
