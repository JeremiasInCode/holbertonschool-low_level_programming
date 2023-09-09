#ifndef _variadic_functions_h_
#define _variadic_functions_h_
#include <stdarg.h>

/* -- Task 0 -- */
int sum_them_all(const unsigned int n, ...);

/* -- Task 1 -- */
void print_numbers(const char *separator, const unsigned int n, ...);

/* -- Task 2 -- */
void print_strings(const char *separator, const unsigned int n, ...);

/* -- Task 3 -- */
void print_all(const char * const format, ...);


typedef struct structure
{
	char option;
	int(*function)(va_list); 
	/* Function to extra functions. (int,char,float etc.)*/
}op_t;


int function_char(va_list params);
int function_integer(va_list params);
int function_float(va_list);
int function_string(va_list);

#endif
