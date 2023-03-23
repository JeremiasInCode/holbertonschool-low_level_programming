#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all parameters using variadic functions.
 *
 * @n: cant of parameters undefined.
 *
 * Return: int.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
