#include "lists.h"

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (!h)
		return (-1);

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		i++;
	}
	return (0);
}
