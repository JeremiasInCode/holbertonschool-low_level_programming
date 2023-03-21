#ifndef _function_pointers_h_
#define _function_pointers_h_

/* -- Task 0 -- */
void print_name(char *name, void (*f)(char *));

/* -- Task 1 -- */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
