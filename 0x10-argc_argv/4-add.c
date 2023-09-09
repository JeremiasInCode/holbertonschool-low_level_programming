#include <stdio.h>
#include <stdlib.h>

int isDigit(char *param1);

/**
 * main - This function is the entry point.
 *
 * @argc: This param print the cant of params.
 * @argv: This param print the value of those params.
 * Return: 0.
 *
 * Explain the function:
 * This function do verifications and add two numbers.
 *
 * Author: Jeremias Erba.
 */

int main(int argc, char *argv[])
{
	int add = 0, i;

	if ((argc == 1) || (atoi(argv[1]) == 0))
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isDigit(argv[i]))
		{
			add = add + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}


/**
 * isDigit - Function to verify if the argv is a digit or not.
 *
 * @param1: Char argv to verify.
 * Return:
 * 1 if is a number.
 * 0 if is not  a number.
 *
 * Author: Jeremias Erba.
 */

int isDigit(char *param1)
{
	int i;

	for (i = 0; param1[i]; i++)
	{
		if (param1[i] < 48 || param1[i] > 57)
		{
			return (0);
		}
	}
	return (1);
}
