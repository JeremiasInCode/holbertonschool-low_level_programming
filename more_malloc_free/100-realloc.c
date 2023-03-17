#include "main.h"
#include <string.h>

/**
 * _realloc - Reallocates memory block using malloc and free.
 *
 * @ptr: Pointer poinnting to the memory previosluy
 * allocated with malloc(old_size).
 * @old_size: Size in bytes, of allocated space for ptr.
 * @new_size: New size, in bytes of the new memory block.
 * Return: void.
 *
 * Author: Jeremias Erba.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *NewPtr = NULL;
	char *NewOldPtr = (char *)ptr;

	/* Conditions in order */
	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size < old_size)
		old_size = new_size;

	NewPtr = malloc(old_size);
	if (NewPtr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
		NewOldPtr[i] = NewPtr[i];

	free(ptr);
	return (NewOldPtr);
}
