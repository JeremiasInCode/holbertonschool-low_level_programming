#ifndef _function_pointers_h_
#define _function_pointers_h_
#include <stddef.h>
#include <stdio.h>

/* -- Task 0 -- */
void print_name(char *name, void (*f)(char *));

/* -- Task 1 -- */
void array_iterator(int *array, size_t size, void (*action)(int));

/* -- Task 2 -- */
int int_index(int *array, int size, int (*cmp)(int));

/* -- Task 3 -- */
int (*get_op_func(char *s))(int, int);

#endif
