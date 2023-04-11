#include "main.h"

/**
* freeBuffer - Free a given buffer.
*
* @buffer: Buffer to free.
*/

void freeBuffer(char **buffer)
{
	((*buffer) ? free(*buffer), *buffer = NULL : NULL);
}
