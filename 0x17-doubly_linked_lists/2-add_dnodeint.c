#include "lists.h"
/**
 * add_dnodeint - check the code
 * @h: list head
 * @n: added value
 * Return: list new head
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *h;
	new_node->prev = NULL;
	if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
}
