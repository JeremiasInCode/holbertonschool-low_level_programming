#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table.
 *
 * @ht: Hash table.
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, comma = 0;
	hash_node_t *nodeHt = NULL;

	if (!ht)
		return;

	putchar('{');
	for (; i < ht->size; i++)
	{
		nodeHt = ht->array[i];
		while (nodeHt)
		{
			((comma) ? printf(", "), 0 : 0);

			if (nodeHt != NULL)
				printf("'%s': '%s'", nodeHt->key, nodeHt->value);

			nodeHt = nodeHt->next;
			comma = 1;
		}
	}
	putchar('}');
	putchar('\n');
}
