#include "main.h"

/**
 * _memset - Development of the function.
 *
 * @s: char than point to b, (byte in memory).
 * @b: constant byte (char - array).
 * @n: Numbers of bytes of memory.
 * Return: char.
 *
 * Author: Jeremias Erba.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
