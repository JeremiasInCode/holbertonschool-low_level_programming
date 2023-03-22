#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point.
 *
 * @argc: cant of arguments.
 * @argv: array of these arguments.
 * Return: int.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error 98\n");
		exit(98);
	}
	else if (!(get_op_func(argv[2])))
	{
		printf("Error 99\n");
		exit(99);
	}
	else if ((argv[2][0] == '/' && argv[3][0] == '0') ||
	(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error 100\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), (atoi(argv[3]))));
	return (0);
}
