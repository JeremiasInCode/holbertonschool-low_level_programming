#include "main.h"

/**
 * _memcpy - Development of this function.
 *
 * @dest: Array than save (n) bytes of src.
 * @src: Array than contain memory (bytes).
 * @n: variable conditionals for save certain bytes in memory.
 * Return: char.
 *
 * Author: Jeremias Erba.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iterator = 0;

	for (; iterator < n; iterator++)
	{
		dest[iterator] = src[iterator];
	}
	return (dest);
}
