#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function is the entry point.
 *
 * @argc: This param print the cant of params.
 * @argv: This param print the value of those params.
 * Return: 0.
 *
 * Explain the function:
 * This function multiply two numbers for arguments.
 *
 * Author: Jeremias Erba.
 */

int main(int argc, char *argv[])
{
	int multiplication = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	multiplication = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiplication);
	return (0);
}
