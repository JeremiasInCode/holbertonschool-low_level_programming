#include "main.h"

/**
 * _strchr - Development of this function.
 *
 * @s: Array to test.
 * @c: character for verify.
 * Return: char.
 *
 * Author: Jeremias Erba.
 *
 * If the character is null, will not return any of the content,
 * since it is null.
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	for (; s[index]; index++)
	{
		if (s[index] == c)
			return (index + s);
		if (s[index] == '\0')
			continue;
	}
	if (c == 0)
		return (index + s);
	return (0);
}
