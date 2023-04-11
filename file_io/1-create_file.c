#include "main.h"

/**
 * create_file - Create a file.
 *
 * @filename: Name of the file.
 * @text_content: Content to be included in the file.
 *
 * Return:
 *
 * 1 - If is success.
 * -1 - If is failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	int len_content = strlen(text_content);
	char *buffer = NULL;

	buffer = malloc(sizeof(char *) * len_content);

	if (!filename || !buffer)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (!fd)
		return (-1);

	wr = write(fd, buffer, len_content);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
