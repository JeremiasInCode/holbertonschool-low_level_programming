#include "lists.h"

/**
 * add_node_end - Create new node at the end.
 *
 * @head: pointer.
 * @str: string.
 *
 * Return: The addres of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t currentNode = *head;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	while (currentNode != NULL)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	return (currentNode);
}
