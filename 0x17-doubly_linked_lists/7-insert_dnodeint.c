#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: list head
 * @i: index
 * @n: added value
 * Return: list pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int i, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int j = 0;

	if (i == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		for (j = 0; i > j && tmp; j++)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				break;
		}
		if (tmp == NULL && j == i)
			return (add_dnodeint_end(h, n));
		else
			return (NULL);
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->prev = tmp->prev;
		new_node->next = tmp;
		tmp->prev->next = new_node;
		tmp->prev = new_node;
	}
	return (new_node);
}
