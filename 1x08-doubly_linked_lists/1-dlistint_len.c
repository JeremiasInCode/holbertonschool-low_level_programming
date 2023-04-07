#include "lists.h"

/**
 * dlistint_len - Count the number of elements.
 *
 * @h: Pointer to the first node.
 *
 * Return: length.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
