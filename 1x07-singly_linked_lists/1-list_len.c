#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list.
 *
 * @h: pointer to the list.
 *
 * Return: (number of elements).
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->str)
			h = h->next;
		i++;
		h = h->next;
	}
	return (i);
}
