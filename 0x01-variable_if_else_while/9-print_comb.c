#include <stdio.h>


/**
 * main - Entry point.
 *
 * Return: Always 0 (If is Success)
 *
 * Author: Jeremias Erba
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers + '0');
		if (numbers == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
