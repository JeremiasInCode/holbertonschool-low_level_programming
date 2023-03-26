#ifndef _variadic_functions_h_
#define _variadic_functions_h_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


typedef struct structure
{
	char option;
	int(*function)(va_list);
} op_t;

int function_char(va_list list);
int function_integer(va_list list);
int functon_float(va_list list);
int function_string(va_list list);

#endif
