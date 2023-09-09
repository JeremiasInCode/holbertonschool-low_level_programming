#include <stdio.h>

/**
 * main - Entry point.
 * fibonacci: This function do the logic of recursion.
 *
 * @testNumber: Number to test.
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

int fibonacci(int testNumber);

int main(void)
{
int i;

for (i = 1; i <= 50; i++)
{
printf("%d\n", fibonacci(i));
}
return (0);
}

int fibonacci(int testNumber)
{
if (testNumber == 0)
{
	return (0);
}
else if (testNumber == 1)
{
	return (1);
}
else if (testNumber == 2)
{
	return (2);
}
else if (testNumber > 2)
{
	return (fibonacci(testNumber - 1) + fibonacci(testNumber - 2));
}
return (0);
}
