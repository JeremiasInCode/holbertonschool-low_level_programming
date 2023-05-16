#include "main.h"

/**
 * create_array - This function create an array of chars
 * and in all initializes with a specific char (c).
 *
 * @size: The ize of the array.
 * @c: Character to start.
 * Return: char.
 *
 * Author: Jeremias Erba.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *buffer = NULL;

	buffer = malloc(sizeof(char *) * size);
	if (!buffer || size == 0)
		return (NULL);
	
	for (; i < size; i++)
		buffer[i] = c;
	
	return (buffer);
}
