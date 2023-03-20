#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print params of pointer struct.
 * @d: pointer struct.
 * Return: pointer.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	else if (d->name == NULL)
	{
		d->name = "nil";
		printf("%s", d->name);
	}
	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
