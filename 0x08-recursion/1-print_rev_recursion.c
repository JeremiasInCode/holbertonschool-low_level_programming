#include "main.h"

/**
 * _print_rev_recursion - This function print *s in reverse
 * until it arrives to '\0' with recursion.
 *
 * @s: Char to test.
 * Return: void.
 * Author: Jeremias Erba.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

