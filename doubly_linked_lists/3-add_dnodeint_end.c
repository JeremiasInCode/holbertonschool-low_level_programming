#include "lists.h"

/**
 * add_dnodeint_end - Add node at the end.
 *
 * @head: Pointer to first node.
 * @n: number to print.
 *
 * Return: The addres of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *current = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (!current)
	{
		*current = newNode;
		newNode->prev = NULL;
	}

	while (current->next)
		current = current->next;

	newNode->prev = current;
	current->next = newNode;
	newNode->next = NULL;

	return (current->next);
}
