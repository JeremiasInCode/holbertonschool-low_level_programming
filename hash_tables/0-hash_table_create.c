#include "hash_tables.h"

/**
 * hash_table_create - To create a hash table.
 *
 * @size: Size of hash table.
 *
 * Return: Return a pointer to the newsly created hast table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned int i = 0;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_table_t) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}
	for (; i < size; i++, size--)
		new_hash_table->array[i] = NULL;

	return (new_hash_table);
}
