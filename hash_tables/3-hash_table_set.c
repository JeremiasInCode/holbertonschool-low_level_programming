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

	if (!key || !value || !ht)
		return (0);

	htIndex = key_index((const unsigned char *) key, ht->size);
	htNode = ht->array[htIndex];

	/*If exists a node in the corresponding index with the same key*/
	if (htNode && strcmp(htNode->key, key) == 0)
	{
		free(htNode->value);
		htNode->value = strdup(value);
		return (1);
	}
	/*Otherwise, I create a new node in that index.*/
	else if (htNode == NULL && strcmp(htNode->key, key) != 0)
	{
		htNode = malloc(sizeof(hash_node_t));
		if (!htNode)
			return (0);

		htNode->key = strdup(key);
		if (!htNode->key)
			return (0);

		/* Connect node */
		htNode->value = strdup(value);
		htNode->next = ht->array[htIndex];
		ht->array[htIndex] = htNode;
	}
	return (1);
}
