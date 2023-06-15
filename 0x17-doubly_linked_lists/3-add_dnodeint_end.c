#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @h: list head
 * @n: added value
 * Return: list new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*h == NULL)
	{
		new_node->prev = NULL;
		*h = new_node;
	}
	else
	{
		tmp = *h;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (*h);
}
