#include "lists.h"
#include "5-get_dnodeint.c"

/**
 * delFirst - Delete of first node.
 *
 * @head: pointer to the first node.
 *
 * Return: addres of head.
 */

int delFirst(dlistint_t **head)
{
	dlistint_t *check = *head;

	if (!head || !(*head))
		return (-1);

	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;

	free(check);
	return (1);
}

/**
 * delete_dnodeint_at_index - Delete a node depending of the index.
 *
 * @head: Pointer to first position.
 * @index: indix for delete.
 *
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *prev = NULL;

	if (!head)
		return (-1);

	if (index == 0)
		return (delFirst(head));

	node = get_dnodeint_at_index(*head, index);

	if (!node)
		return (-1);
	prev = get_dnodeint_at_index(*head, index - 1);
	if (!prev)
		return (-1);

	prev->next = node->next;
	if (prev->next)
		node->next->prev = prev;

	free(node);
	return (1);
}
