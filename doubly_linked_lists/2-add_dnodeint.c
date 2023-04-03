#include "lists.h"

/**
 * add_dnodeint - Add a new node interconnected.
 *
 * @head: Point to the first node.
 * @n: parameter to print.
 *
 * Return: Direction of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	/*Hay que enlazar la lista en el prev.*/
	if (*head)
		(*head)->prev = newNode;
	/**
	 * Luego de tener el newNode detras del head,
	 * el head tiene que apuntar a newNode que esta detras.
	 **/
	*head = newNode;
	return (newNode);
}
