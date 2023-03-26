#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *param;
	va_list list;

	va_start(list, n);

	for (; i < n; i++)
	{
		param = va_arg(list, char *);
		(param != NULL) ? printf("%s", param) : printf("(nil)");

		((i + 1 != n) && (separator != NULL) ? printf("%s", separator) : continue;
	}
	putchar('\n');
}
