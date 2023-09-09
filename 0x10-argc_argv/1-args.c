#include <stdio.h>

/**
 * main - This function is the entry point.
 *
 * @argc: This param print the cant of params.
 * @argv: This param print the value of those params.
 * Return: 0.
 *
 * Explain the function: If *argv in the position 0 have some,
 * argc will be 1, we subtract 1.
 *
 * Author: Jeremias Erba.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argv[0])
		printf("%d\n", --argc);
	return (0);
}
