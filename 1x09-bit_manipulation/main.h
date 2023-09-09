#ifndef _main_h_
#define _main_h_
#include <stdio.h>
#include <stdarg.h>

/* -- Project 3 -- */

int _putchar(char c);

/*Task 1*/
unsigned int binary_to_uint(const char *b);

/*Task 2*/
void print_binary(unsigned long int n);

/*Task 3*/
int get_bit(unsigned long int n, unsigned int index);

/*Task 4*/
int set_bit(unsigned long int *n, unsigned int index);

/*Task 5*/
int clear_bit(unsigned long int *n, unsigned int index);

/*Task 6*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif

