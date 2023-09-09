#include <stdio.h>

/**
 * main - This function have the rol of to do all the logic.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */
int main(void)
{
	int multiple3 = 0;

	int multiple5 = 0;

	int result = 0;

	int i;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0)
		{
			multiple3 += i;
		} else if (i % 5 == 0)
		{
			multiple5 += i;
		}
	}
	result = multiple3 + multiple5;
	printf("%d\n", result);
	return (0);
}
