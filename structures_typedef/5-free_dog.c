#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free memory allocated working with dog functions.
 *
 * @d: pointer struct.
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (!(d))
		exit(0);

	free(d->name);
	free(d->owner);
	free(d);
}
