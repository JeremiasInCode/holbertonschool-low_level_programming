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
	ssize_t fd;
	int len_content = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (; text_content[len_content]; len_content++)
		continue;

	write(fd, text_content, len_content);
	close(fd);
	return (1);
}
