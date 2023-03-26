#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int iterator = 0;
	int sum = 0, param = 0;
	
	if (n == 0)
		return (0);

	va_start(list, n);

	for (; iterator < n; iterator++)
	{
		param = va_arg(list, int);
		sum += param;
	}
	va_end(list);
	return (sum);
}
