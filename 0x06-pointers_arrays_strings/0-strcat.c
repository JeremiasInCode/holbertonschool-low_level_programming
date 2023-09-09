#include "main.h"

/**
 * _strcat - adds src to dest.
 *
 * @dest: destination.
 * @src: source.
 * Return: @dest.
 *
 * Author: Jeremias Erba
 */

char *_strcat(char *dest, char *src)
{
	int countSrc = 0;
	int countDest = 0;

	while (dest[countDest])
	{
		countDest++;
	}

	while (src[countSrc])
	{
		dest[countDest++] = src[countSrc++];
	}
	return (dest);
}
