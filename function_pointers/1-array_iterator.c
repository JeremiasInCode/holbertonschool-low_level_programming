#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0, socket;

	if (!(action))
		exit(1);

	for (; i < size; i++)
	{
		socket = array[i];
		(action)(socket);
	}
}
