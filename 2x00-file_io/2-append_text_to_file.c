#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: Content inside in file.
 *
 * Return:
 * 1 - If is succes.
 * -1 - If is failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd)
		return (-1);

	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
