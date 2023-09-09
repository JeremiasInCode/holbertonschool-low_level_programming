#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *current = *head;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = newNode;

	return (newNode);
}

