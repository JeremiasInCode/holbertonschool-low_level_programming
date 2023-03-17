#include "main.h"

/**
 * str_concat - return a pointer that contain in memory
 * the content of s1 followed by the content of s2.
 *
 * @s1: First char.
 * @s2: Second char to concat.
 * Return: Char.
 *
 * Author: Jeremias Erba.
 */

char *str_concat(char *s1, char *s2)
{
	int countS1, countS2, lenght = 0, iterator, SecondString = 0;
	char *spaceDouble = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (countS1 = 0; s1[countS1]; countS1++)
		;
	for (countS2 = 0; s2[countS2]; countS2++)
		;

	lenght = countS1 + countS2;
	spaceDouble = (char *)malloc((lenght) + 1);

	if (spaceDouble != NULL)
	{
		for (iterator = 0; iterator <= lenght; iterator++)
		{
			if (iterator < countS1)
			{
				spaceDouble[iterator] = s1[iterator];
			}
			else
			{
				spaceDouble[iterator] = s2[SecondString];
				SecondString++;
			}
		}
		return (spaceDouble);
	}
	else
	{
		return (NULL);
	}
}
