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
	int cantStr, i;
	char *spaceArray = NULL;

	if (str != NULL)
	{
		for (cantStr = 0; str[cantStr]; cantStr++)
			;

		/* +1 for character null (\0) */
		spaceArray = (char *)malloc(sizeof(char) * cantStr + 1);

		if (spaceArray == NULL)
			return (NULL);

		for (i = 0; i < cantStr; i++)
			spaceArray[i] = str[i];

		return (spaceArray);
	}
	else
	{
		return (spaceArray);
	}
}
