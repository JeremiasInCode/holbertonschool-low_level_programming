#include "main.h"

/**
 * _strncpy - Copy the characters string src to dest if
 * the count is lower than n.
 *
 * @dest: destination.
 * @src: source.
 * @n: delimitation.
 * Return: @dest.
 *
 * Author: Jeremias Erba
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
