#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 *
 * @ht: Hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nodeHt = NULL;
	unsigned int i = 0;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		nodeHt = ht->array[i];
		while (nodeHt)
		{
			free(nodeHt->key);
			free(nodeHt->value);
			free(nodeHt);
			nodeHt = nodeHt->next;
		}
	}
	free(ht->array);
	free(ht);
}
