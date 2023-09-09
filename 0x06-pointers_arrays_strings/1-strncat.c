#include "main.h"

/**
 * _strncat - Concats two string if the bytes are lower than n.
 *
 * @dest: destination.
 * @src: array.
 * @n: limit of bytes.
 * Return: @dest.
 *
 * Author: Jeremias Erba.
 */

char *_strncat(char *dest, char *src, int n)
{
	int countSrc = 0;
	int countDest = 0;

	while (dest[countDest])
	{
		countDest++;
	}

	while (src[countSrc] && countSrc < n)
	{
		dest[countDest++] = src[countSrc++];
	}
	return (dest);
}
