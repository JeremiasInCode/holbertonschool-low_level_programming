#include "main.h"

/**
 * _isalpha - Verify if the character in lower or upper
 * @c: Number for to check.
 *
 * Return: Already 0 (If is Succes).
 *
 * Author: Jeremias Erba.
 */


int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
