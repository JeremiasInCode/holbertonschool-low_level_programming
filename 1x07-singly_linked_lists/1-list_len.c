#include "lists.h"

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	for (; h; i++)
	{
		if (!h->str)
			h = h->next;
		h = h->next;
	}
	return (i);
}
