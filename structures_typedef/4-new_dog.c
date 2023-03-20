#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Calculate the lenght of the char.
 * @s: First param.
 * Return: int.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s = s + 1;
	}
	return (len);
}

/**
 * _strcpy - Copy src in dest.
 *
 * @dest: First param.
 * @src: Second param.
 *
 * Return: char.
 */

char *_strcpy(char *dest, char *src)
{
	int iterator = 0;

	for (; src[iterator] != '\0'; iterator++)
		dest[iterator] = src[iterator];

	dest[iterator] = '\0';
	return (dest);
}

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
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}

	copy->name = (char *)malloc(sizeof(char) * _strlen(name) + 1);

	if (copy->name == NULL)
	{
		free(copy);
		return (NULL);
	}

	copy->owner = (char *)malloc(sizeof(char) * _strlen(owner) + 1);
	if (copy->owner == NULL)
	{
		free(copy->name);
		free(copy);
		return (NULL);
	}
	_strcpy(copy->name, name);
	copy->age = age;
	_strcpy(copy->owner, owner);
	return (copy);
}

