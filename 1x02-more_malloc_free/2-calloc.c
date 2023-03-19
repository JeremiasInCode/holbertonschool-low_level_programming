#include "main.h"

/**
 * _calloc - Allocates memory for an array.
 *
 * @nmemb: Elements of the array.
 * @size: Size of elements.
 * Return: pointer.
 *
 * Author: Jeremias Erba
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *space;
	unsigned int iterator;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = (char *)malloc(size * nmemb);

	if (space == NULL)
		return (NULL);

	for (iterator = 0; iterator < nmemb * size; iterator++)
		space[iterator] = 0;

	return (space);
}
