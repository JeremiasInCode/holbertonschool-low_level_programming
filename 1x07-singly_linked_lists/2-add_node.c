#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	newNode->next = *head;
	*head = newNode;
	return (*head);
}
