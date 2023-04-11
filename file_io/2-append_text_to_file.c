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
	ssize_t fd;
	int len_content = 0;

	for (; text_content[len_content]; len_content++)
		continue;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND, 0644);
	if (!fd)
		return (-1);

	write(fd, text_content, len_content);
	close(fd);
	return (1);
}
