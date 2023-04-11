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

/**
 * read_textfile - Read a text file and print.
 *
 * @filename: name of file.
 * @letters: number of letters that should read and print the function.
 *
 * Return: Number of letters was readed and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer = NULL;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char *) * letters);
	if (!buffer)
		return (0);

	/* Return length of bytes read*/
	rd = read(fd, buffer, letters);
	if (!rd)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (!wr)
		return (0);

	close(fd);
	freeBuffer(&buffer);
	return (wr);
}
