#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end.
 *
 * @head: Pointer to the first node.
 * @n: number to print.
 *
 * Return: Addres of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *current = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (current)
	{
		while (current->next)
			current = current->next;
		newNode->prev = current;
		current->next = newNode;
	}
	else
	{
		*head = newNode;
		newNode->prev = NULL;
	}

	newNode->next = NULL;

	return (newNode);
}
