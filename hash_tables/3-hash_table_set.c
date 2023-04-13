#include "hash_tables.h"

/**
 * hash_table_set - To create a new element in the hash table.
 *
 * @ht: Hash table.
 * @key: Key of hash table.
 * @value: Value inside of index.
 *
 * Return:
 * 1 - If is success.
 * 0 - Otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int htIndex = 0;
	hash_node_t *htNode = NULL;
	char *newValue = NULL;

	/* -- Copy of new value - Request  -- */
	newValue = strdup(value);

	/* -- Index for save the value  -- */
	htIndex = key_index((const unsigned char *)key, ht->size);

	/* -- Node will have the array of hash table -- */
	htNode = ht->array[htIndex];

	if (!key || !ht || !newValue || !htIndex)
		return (0);

	if (strcmp(htNode->key, key) == 0)
	{
		free(htNode->value);
		htNode->value = newValue;
	}
	else
	{
		htNode = malloc(sizeof(hash_node_t));
		if (!htNode)
			return (0);
		htNode->key = strdup(key);
		htNode->value = newValue;
	}
	return (1);
}
