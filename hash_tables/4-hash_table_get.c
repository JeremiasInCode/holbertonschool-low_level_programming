#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: Hash table.
 * @key: Key of a index.
 *
 * Return:
 * - Value associated with the element.
 * NULL - If key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int htIndex = 0;
	hash_node_t *htNode = NULL;

	if (strcmp(key, "") == 0 || !ht)
		return (NULL);

	htIndex = key_index((const unsigned char *) key, ht->size);
	htNode = ht->array[htIndex];

	while (htNode != NULL)
	{
		if (strcmp(htNode->key, key) == 0)
			return (htNode->value);
		htNode = htNode->next;
	}
	return (NULL);
}
