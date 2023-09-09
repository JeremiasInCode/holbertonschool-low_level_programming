#include "main.h"

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
		/*The sign of n is converted to positive and is save in the variable num*/
	}
	else
	{
		num = n;
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');

	if (n / 10 == 0 && n < 0)
	{
		_putchar('\n');
	}
}
