#include "lists.h"

/**
 * print_list - Print the values of the linked list.
 *
 * @h: Pointer to the node.
 *
 * Return: size of nodes.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

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
	return (i);
}
