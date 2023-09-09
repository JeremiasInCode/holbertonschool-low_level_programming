#include <stdio.h>

/**
 * main - This function is the entry point.
 *
 * @argc: This param print the cant of params.
 * @argv: This param print the value of those params.
 * Return: 0.
 *
 * Explain the function: If the clear count argc have some,
 * will iterate until there are no more.
 *
 * Author: Jeremias Erba.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s", argv[i]);
			putchar('\n');
		}
	}
	return (0);
}
