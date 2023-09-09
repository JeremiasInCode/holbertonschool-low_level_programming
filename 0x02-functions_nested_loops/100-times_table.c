#include "main.h"

/**
 * print_times_table - Print the n times tables, using loops and specific conditionals.
 *
 * Return: Always 0 (If is Success).
 *
 * Author: Jeremias Erba.
 */

void print_times_table(int n)
{
        int numToMultiply, colum, result;

        for (numToMultiply = 0; numToMultiply <= n; numToMultiply++)
        {
                if (n > 15 || n < 0)
                {
                        break;
                }
                for (colum = 0; colum <= n; colum++)
                {
                        result = numToMultiply * colum;
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
                        if (colum != n)
                        {
				_putchar(',');
				_putchar(' ');
                        }
                        if (result >= 100)
                        {
				_putchar((result / 100) + '0');
                        }
                }
                _putchar('\n');
        }
}
