#include "main.h"

/**
 * str_concat - return a pointer that contain in memory
 * the content of s1 followed by the content of s2.
 *
 * @s1: First char.
 * @s2: Second char to concat.
 * Return: Char.
 *
 * Author: Jeremias Erba.
 */

char *str_concat(char *s1, char *s2)
{
	int size_S1 = 0, size_S2 = 0, total_space = 0, i = 0, second_i = 0;
	char *buffer = NULL;

	for (; s1[size_S1]; size_S1++)
		;
	
	for (; s2[size_S2]; size_S2++)
		;

	total_space = (size_S1 + size_S2);
	buffer = malloc(sizeof(char *) * total_space);
	if (!buffer)
		return (buffer);

	for (; i < total_space; i++)
	{
		if (i < size_S1)
		{
			buffer[i] = s1[i];
		}
		else if (i > size_S1)
		{
			buffer[i] = s1[second_i];
			second_i++;
		}
	}
	return (buffer);
}
