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
	unsigned int i;
	char *spaceArray;

	spaceArray = (char *)malloc(sizeof(char) * size);

	if (spaceArray == NULL || size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		spaceArray[i] = c;
	}
	return (spaceArray);
}
