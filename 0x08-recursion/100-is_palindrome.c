#include "main.h"

/**
 * is_palindrome - This function verify if
 * a string is a palindrome or no.
 *
 * @s: Char to test.
 * Return: int.
 *
 * Author: Jeremias Erba.
 */

int is_palindrome(char *s)
{
	char *b = s;

	if (*s != '\0')
	{
		is_palindrome(s + 1);
		if (*b == *s)
		{
			return (1);
		}
		else if (*s != *b)
		{
			return (0);
		}
	}
	return (0);
}
