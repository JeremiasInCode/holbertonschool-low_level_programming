#include "main.h"

/**
 * times_table - Print the 9 times tables, using loops and conditionals.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void times_table(void)
{
	int NumToMultiply, colum, result;

	for (NumToMultiply = 0; NumToMultiply < 10; NumToMultiply++)
	{
		for (colum = 0; colum < 10; colum++)
		{
			result = NumToMultiply * colum;
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (colum != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (colum == 0)
			{
				_putchar(result + '0');
			}
			if (colum != 9)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		}
	   write(1, "\n", 1);
	}
}
