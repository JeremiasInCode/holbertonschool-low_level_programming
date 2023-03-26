#include "variadic_functions.h"

/**
 * get_op_func - Select a function throught.
 *
 * @s: char icon passed for params.
 * Return: int.
 */

int (get_op_func(char *s))(va_list, ...)
{
	va_list list;
	int iterator = 0;

	va_start(list, s);

	op_t options[] = {
		{ "c", char_function },
		{ "i", integer_function },
		{ "f", float_function },
		{ "s", string_function },
		{ NULL, NULL }
	};

	while ((_strcmp(options[iterator].f), va_list)
	{
		return (options[iterator].function);
		iterator++;
	}
	va_end(list);
	return (NULL);
}

/**
 * _strcmp - Checked if two character strings are some or differents.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: diference (int) or (0).
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
