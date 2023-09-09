#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Print a name.
 *
 * @name: String to print.
 * @f: Function pointer that return nothing and contain one param char pointer.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	/*
	 * received by this function:
	 *
	 * 1) A param char, it is the first param.
	 * 2) The function to be executed.
	 * This function receives a direction memory to the first byte of code of the
	 * function that we pass it.
	 */

	(!(f))
	? exit(0)
	: (f)(name);
}

