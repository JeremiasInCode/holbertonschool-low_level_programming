#include "lists.h"

/**
 * print_dlistint - Prints all the elements using doubly linked lists.
 *
 * @h: Pointer to the node.
 *
 * Return: Lenght of the string.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
