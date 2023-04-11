include "main.h"

/**
 * append_text_to_file - Function that append text at the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: Content inside in the file.
 *
 * Return:
 * 1 - if is succes.
 * -1 - if is failed.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wr.
	int len_count = 0;

	len_content = strlen(text_content);

	if (!filename || !text_content)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0644);
	if (!fd)
		return (-1);

	wr = write(fd, text_content, len_content);
	if (!wr)
		return (-1);
	close(fd);
	return (1);
}
