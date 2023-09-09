#include "main.h"

/**
 * swap_int - Inverse values.
 *
 * @a: First value to invert.
 * @b: Second value to invert.
 * 
 * Explain the function:
 * ---------------------
 * Swaps the values.
 * ---------------------
 *
 * Author: Jeremias Erba.
 */

void swap_int(int *a, int *b)
{
	int inverse = 0;

	inverse = *b;
	*b = *a;
	*a = inverse;
}
