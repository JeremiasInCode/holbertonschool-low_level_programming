#include "main.h"

/**
 * _puts_recursion - This function print *s
 * until it arrives to '\0'with recursion.
 *
 * @s: Char to test.
 * Return: void.
 * Author: Jeremias Erba.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		putchar('\n');
	}
}

