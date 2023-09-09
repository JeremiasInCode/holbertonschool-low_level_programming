#include "main.h"

/**
 *  string_toupper - Development the string_toupper function.
 *
 *  @n: Array to test.
 *  Return: char.
 *
 *  Author: Jeremias Erba.
 */

char *string_toupper(char *n)
{
	int count = 0;

	for (; n[count]; count++)
	{
		if (n[count] >= 97 && n[count] <= 122)
		{
			n[count] = n[count] - 32;
		}
	}
	return (n);
}
