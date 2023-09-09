#include "main.h"

/**
 * rot13 - This function encode a string using rot13.
 *
 * @string: String to test.
 * Return: Char pointer.
 *
 * Author: Jeremias Erba.
 */

char *rot13(char *string)
{
	for (; *string && *string != '\0'; string++)
	{
		if ((*string >= 'a' && *string <= 'm') || (*string >= 'A' && *string <= 'M'))
		{
			*string = ((*string | 32) + 13) ^ (*string & 32);
		}
	}
	return (string);
}
