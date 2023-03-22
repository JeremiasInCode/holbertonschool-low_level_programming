#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Function that selects the correct function and icon.
 *
 * @s: char icon.
 * Return: int.
 */

int (*get_op_func(char *s))(int, int)
{
	int iterator = 0;
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	while (ops[iterator].op)
	{
		if (strcmp(ops[iterator].op, s))
			return (ops[iterator].f);
		iterator++;
	}
	return (NULL);
}
