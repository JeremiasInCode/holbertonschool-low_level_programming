#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int param = 0;

	va_start(list, n);

	for (; i < n; i++)
	{
		param = va_arg(list, int);
		printf("%d", param);
		if ((i + 1 != n) && (separator != NULL))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
