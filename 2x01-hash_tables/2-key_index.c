#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 *
 * @key: Key of the hash table.
 * @size: Size of the array of hash table
 *
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	if (!size)
		return (0);

	return (hash_value % size);
}
