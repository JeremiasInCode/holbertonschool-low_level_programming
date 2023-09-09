#include "main.h"
#include <stdio.h>

/**
 * _strlen - Development the strlen function.
 *
 * @s: Character string.
 * Return: Count of characters.
 *
 * Explain the function:
 * ---------------------------------------------------------------
 * While the count does not terminate, increment the variable s +1.
 * Until the counter reaches the end of the string [n].
 * ---------------------------------------------------------------
 *
 * Author: Jeremias Erba.
 */

int _strlen(char *s)
{
	int count = 0;

	for (; s[count]; count++)
		;
	return (count);
}
