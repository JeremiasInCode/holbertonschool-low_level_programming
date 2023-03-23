#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print string.
 *
 * @separator: Separator for words.
 * @n: cant of arguments.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *character;

	va_start(list, n);

	for (; i < n; i++)
	{
		character = va_arg(list, char*);
		(character == NULL) ? printf("(nil)") : printf("%s", character);

		if ((i + 1 != n) && (separator != NULL))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
