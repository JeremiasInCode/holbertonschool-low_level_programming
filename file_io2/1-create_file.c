#include "main.h"

/**
 * create_file - Create a file.
 *
 * @filename: Name of the file.
 * @text_content: Content inside in the file.
 *
 * Return:
 * 1 - If is success.
 * -1 - If is failed.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	int len_content = strlen(text_content);

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (!fd)
		return (-1);

	wr = write(fd, filename, len_content);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
