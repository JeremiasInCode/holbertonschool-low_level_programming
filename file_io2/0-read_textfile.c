#include "main.h"

/**
 * read_textfile - reads a text file and prints.
 *
 * @filename: name of the file.
 * @letters: number of letters that should read and print the function.
 *
 * Return: Number of letters that was readed and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer = NULL;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0)

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (-1);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
		return (0);

	close(fd);
	freeBuffer(&buffer);
	return (wr);
}
