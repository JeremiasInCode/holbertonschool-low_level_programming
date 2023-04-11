#include "main.h"
#define FULL_SIZE 1024

/**
 * main - Function that copy the content of a file to another file.
 *
 * @argc: Count of params passed.
 * @argv: Value of each argument.
 *
 * Return: 0 if is succes, otherwise, exit(specified state).
 **/

int main(int argc, char *argv[])
{
	ssize_t fd, fs, rd, wr;
	char *buffer[FULL_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fs = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fs == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((rd = read(fd, buffer, FULL_SIZE)))
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr = write(fs, buffer, rd);

		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd), exit(100);
	if (close(fs) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fs), exit(100);

	return (0);
}
