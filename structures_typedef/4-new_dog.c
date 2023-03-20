#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
 * new_dog - Create a new dog.
 *
 * @name: First param.
 * @age: Second param.
 * @owner: Third param.
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy = NULL;

	copy = malloc(sizeof(dog_t));
	if (copy != NULL)
	{
		copy->name = _strdup(name);
		if (copy->name == NULL)
		{
			free(copy);
			return (NULL);
		}
		copy->owner = _strdup(owner);
		if (copy->owner == NULL)
		{
			free(copy->owner);
			free(copy);
			return (NULL);
		}
		copy->age = age;
	}
	return (copy);
}

/**
 * _strdup - Function that copy a string in other.
 * @str: char for to copy.
 * Return: char.
 */

char *_strdup(char *str)
{
	int cantStr, i;
	char *spaceArray = NULL;

	if (str != NULL)
	{
		for (cantStr = 0; str[cantStr]; cantStr++)
			;
		spaceArray = malloc(cantStr + 1);
		
		if (spaceArray == NULL)
			return (NULL);

		for (i = 0; i < cantStr; i++)
			spaceArray[i] = str[i];
	}
	return (spaceArray);
}
