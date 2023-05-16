#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Constructor for params.
 *
 * @d: Pointer struct.
 * @name: First element of the struct.
 * @age: Second element of the struct.
 * @owner: Third element of the struct.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		printf("Ok\n"), exit(0);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
