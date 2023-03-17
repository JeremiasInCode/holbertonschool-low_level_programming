#include "main.h"

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
	char *NewOldPtr = NULL;

	NewOldPtr = (char *)malloc(old_size * new_size);
	/* Conditions in order */
	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (NewOldPtr);
}
