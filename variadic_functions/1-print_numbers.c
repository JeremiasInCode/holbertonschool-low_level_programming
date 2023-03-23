#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print the numbers passed for parameters.
 *
 * @separator: char that complies the function of separator.
 * @n: cant of params.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int undefParams = 0;

	va_start(list, n);

	for (; i < n; i++)
	{
		undefParams = va_arg(list, int);
		printf("%d", undefParams);

		if ((i + 1 != n) && (separator != NULL))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
