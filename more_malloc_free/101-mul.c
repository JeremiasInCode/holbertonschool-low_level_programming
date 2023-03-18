#include <stdio.h>
#include <stdlib.h>
int _verifyNumber(char *param1);

/**
 * main - Entry point.
 *
 * @argc: number to params.
 * @argv: value into in params.
 * Return: int.
 *
 * Author: Jeremias Erba.
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (_verifyNumber(argv[1]) == 0 && _verifyNumber(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}

	if (_verifyNumber(argv[1]) == 1 && _verifyNumber(argv[2]) == 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);
	return (0);
}

/**
 * _verifyNumber - This function to verify that param1 be a number or no.
 *
 * @param1: Number to verify.
 * Return: int.
 *
 * Author: Jeremias Erba.
 */

int _verifyNumber(char *param1)
{
	int iterator = 0, value = 1;

	while (param1[iterator] != '\0' && value == 1)
	{
		if (param1[iterator] < '0' || param1[iterator] > '9')
			value = 0;
		iterator++;
	}
	return (value);
}
