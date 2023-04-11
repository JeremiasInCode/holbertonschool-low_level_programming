#include "main.h"

/**
 * main - Function that copy the content of the a file to another file.
 *
 * @argc: The count of elements passed.
 * @argv: The value of each argc.
 *
 * Return:
 * 1 - If is success.
 * -1 - If is failure.
 */

int main(int argc, char *argv[])
{
	ssize_t fd, ft, rd, wr;
	char buffer;

	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_WRONLY);
	if (!fd)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ft = open(argv[2], O_WRONLY | 0_CREAT | 0_TRUNC, 0600);
	if (!ft)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd = read(fd, buffer, BUFF_SIZE);
	while (rd)
	{
		if (!rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(ft, buff, rd);
		if (!wr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((close(fd) == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd), exit(100);
	if ((close(ft) == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", ft), exit(101);
}
