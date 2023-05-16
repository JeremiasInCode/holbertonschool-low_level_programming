#include "main.h"

/**
 * _strdup - This function copy a char
 * to a pointer witch dinamic memory.
 *
 * @str: Char to copy.
 * Return: char pointer.
 *
 * Author: Jeremias Erba.
 */

char *_strdup(char *str)
{
	unsigned int size_string = 0, i = 0;
	char *buffer = NULL;

	if (str)
	{
		for (size_string = 0; str[size_string]; size_string++)
			continue;
		
		buffer = malloc(sizeof(char *) * size_string);
		if (!buffer)
			return (NULL);
		
		for (; i < size_string; i++)
			buffer[i] = str[i];
		
		return (buffer);
	}
	else
	{
		return (buffer);
	}
}
