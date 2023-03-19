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
	void *Newptr = NULL;

	/* Conditions in one line */
	if (new_size == old_size)
		return (ptr);

	if (!(ptr))
		return (malloc(new_size));

	/* Conditions in more of one line*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/**
	* If none of the conditions are met,
	* We allocated memory for void pointer with the new_size
	* that effectively is the new size for the new pointer :)
	*/

	Newptr = malloc(new_size);
	if (!(Newptr))
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		((char *)Newptr)[i] = ((char *)ptr)[i];

	free(ptr);
	return (Newptr);
}
