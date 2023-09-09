#include "lists.h"

/**
 * get_dnodeint_at_index - Get a node through a index.
 *
 * @head: Pointer to the first node.
 * @index: index of the node.
 *
 * Return: Addres of node found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i != index)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
		i++;
	}
	return (head);
}
