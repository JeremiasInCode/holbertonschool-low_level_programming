#include "main.h"

/**
 * _strcmp - Checked if the two characteres strings are same or differents.
 *
 * @s1: First character string to check.
 * @s2: Second character string to check.
 * Return: 0.
 *
 * Author: Jeremias Erba
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
