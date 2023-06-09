#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * @argc: cant of arguments.
 * @argv: content of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
	(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), (atoi(argv[3]))));
	return (0);
}
