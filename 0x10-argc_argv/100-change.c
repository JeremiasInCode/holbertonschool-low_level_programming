#include <stdio.h>
#include <stdlib.h>

/**
* main - This function is the entry point.
*
* @argc: This param print the cant of params.
* @argv: This param print the value of those params (Array of arrays).
* Return: 0.
*
* Author: Jeremias Erba.
*/

int main(int argc, char *argv[])
{
	int cents[] = { 25, 10, 5, 2, 1 };
	int indexCents = 0;
	int count = atoi(argv[1]);
	int countResponse = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	else if (count < 0)
	{
		printf("0\n");
		return (0);
	}
	else if (count > 0)
	{
		while (cents[indexCents])
		{
			if (count >= cents[indexCents] && count > 0)
			{
				countResponse++;
				count -= cents[indexCents];
				count -= 1;
			}
			indexCents++;
		}
	}
	printf("%d\n", countResponse);
	return (0);
}
