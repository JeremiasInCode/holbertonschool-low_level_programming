#include "main.h"
#include <stdio.h>

/**
 * rev_string  - Inverse strings.
 *
 * @s: Character to invert.
 *
 *
 * Explain the function:
 * ----------------------------------------
 * This function revert a character string.
 * ----------------------------------------
 *
 *
 * Author: Jeremias Erba.
 */

void rev_string(char *s)
{
	int index = 0;
	int first = 0;
	int inverse = 0;

	for (; s[index]; index++)
		continue;

	index -= 1;

	for (; index >= first; index--, first++)
	{
		inverse = s[index];
		s[index] = s[first];
		s[first] = inverse;
	}
}

