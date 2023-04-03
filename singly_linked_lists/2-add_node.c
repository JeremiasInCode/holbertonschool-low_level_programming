#include "lists.h"

/**
 * add_node - Add node.
 *
 * @head: puntero a la primera direccion.
 * @str: string to copy.
 *
 * Return: The addres of the nuevo element.
 */

list_t *add_node(list_t **head, const char *str)
{
	/*Assing new size for the node*/
	list_t *newNode = NULL;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);

	/*El puntero del nuevo nodo tiene el comienzo del principal nodo,tiene algo.*/
	newNode->next = *head;
	/*El comienzo del principal nodo, le asignamos los valores del nuevo nodo*/
	*head = newNode;
	return (*head);
}
