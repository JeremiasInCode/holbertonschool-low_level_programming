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

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
