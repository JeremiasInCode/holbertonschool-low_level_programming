#include <stdio.h>

/**
 * main - This function is the entry point.
 *
 * @argc: This param print the cant of params.
 * @argv: This param print the value of those params.
 * Return: 0.
 *
 * Author: Jeremias Erba.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	putchar('\n');
	return (0);
}
