#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	unsigned int socket = 0;
	for (; i < size; i++)
	{
		socket = array[i];
		(action)(socket);
	}
}
