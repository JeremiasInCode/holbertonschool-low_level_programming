#include "lists.h"
#include "5-get_dnodeint.c"

/**
 * insert_dnodeint_at_index - Insert a new node with idx and the value n.
 *
 * @h: pointer to the first node.
 * @idx: index.
 * @n: value.
 *
 * Return: addres of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	dlistint_t *newNode = NULL;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));

	/* Obtenemos la posicion anterior a donde queremos crear el nodo*/
	aux = get_dnodeint_at_index(*h, idx - 1);
	if (!aux)
		return (NULL);

	/* Creamos el nodo en esa posicion*/
	newNode = add_dnodeint(&(aux->next), n);
	newNode->prev = aux;
	aux->next = newNode;

	return (aux->next);
}
