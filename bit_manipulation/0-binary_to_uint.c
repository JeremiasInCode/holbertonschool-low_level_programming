#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 *
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return:
 *  - the number convert.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		decimal = decimal << 1;
		decimal += b[i] - '0';
		i++;
	}
	return (decimal);
}

/* Deciaml guarda cada bit hacia la izquierda (se multiplica por 2). */
/*Luego decimal contiene el caracter que representa el bit a un valor entero.*/
