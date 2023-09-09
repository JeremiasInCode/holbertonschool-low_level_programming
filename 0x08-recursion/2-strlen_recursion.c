#include "main.h"

/**
 * _strlen_recursion - This function print the lenght in a string.
 *
 * @s: Char to test.
 * Return: int.
 *
 * Author: Jeremias Erba.
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (s[0])
	{
		count++;
		count = count + _strlen_recursion(&s[1]);
	}
	return (count);
}
