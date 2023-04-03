#include "lists.h"

/**
 * free_list - Freez a list.
 *
 * @head: pointer to the first node.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		(head->str) ? free(head->str) : free(head);
	}
}
