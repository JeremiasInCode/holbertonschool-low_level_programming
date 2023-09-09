#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc.
 *
 * I can use this function for example to ask for an array of
 * integers and have ways to verify if it succeeds or not.
 *
 * @b: The size in bytes for to reserve.
 * Return: void pointer poiting to the direction memory.
 */

void *malloc_checked(unsigned int b)
{
	void *memory = NULL;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
