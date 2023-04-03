#include "lists.h"

/**
 * free_list - free a list.
 *
 * @head: pointer to the node.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	while (head)
	{
		/*Llamada recursiva para que free de el ultimo hacia el primero*/
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
