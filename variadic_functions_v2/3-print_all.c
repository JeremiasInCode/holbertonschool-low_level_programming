#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int
function_char(va_list params)
{
	int result;

	result = va_arg(params, int);
	printf("%c", result);
	return (0);
}

int
function_integer(va_list params)
{
	int result = 0;

	result = va_arg(params, int);
	printf("%d", result);
	return (0);
}

int
function_float(va_list params)
{
	float result;

	result = va_arg(params, double);
	printf("%f", result);
	return (0);
}

int
function_string(va_list params)
{
	char *string = NULL;

	string = va_arg(params, char *);
	if (!string)
		string = "(nil)";
	printf("%s", string);
	return (0);
}

void
print_all(const char * const format, ...)
{
	va_list list;
	int iteratorF = 0, iteratorO = 0;
	int (*callback)(va_list);
	char *separator1 = "";
	char *separator2 = ", ";
	op_t options[] = {
		{ 'c', function_char },
		{ 'i', function_integer },
		{ 'f', function_float },
		{ 's', function_string },
		{ '\0', NULL }
	};

	va_start(list, format);

	while (format && format[iteratorF])
	{
		/*I search from the beginning of the array in each iteration. (j = 0)*/
		iteratorO = 0;
		while (options[iteratorO].option)
		{
			if (format[iteratorF] == options[iteratorO].option)
			{
				printf("%s", separator1);
				callback = options[iteratorO].function;
				callback(list);
				separator1 = separator2;
			}
			iteratorO++;
		}
		iteratorF++;
	}
	putchar('\n');
	va_end(list);
}
