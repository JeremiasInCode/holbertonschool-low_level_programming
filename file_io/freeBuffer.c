#include "main.h"

/**
 * freeBuffer - Function that free a buffer.
 *
 * @buffer: Buffer to free.
 */

void freeBuffer(char **buffer)
{
	((*buffer) ? free(*buffer), *buffer = NULL : NULL);
}
