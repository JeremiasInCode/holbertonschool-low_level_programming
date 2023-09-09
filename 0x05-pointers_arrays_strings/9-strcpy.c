#include "main.h"

/**
 * _strcpy - Copy the character string src to dest
 *
 * @dest: Destination.
 * @src: Array.
 * Return: @dest.
 *
 * Author: Jeremias Erba.
 */


char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
