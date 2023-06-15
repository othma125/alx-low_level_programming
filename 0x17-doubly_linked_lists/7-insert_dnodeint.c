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
	dlistint_t *new_node, *previous_node = NULL, *tmp = *h;

	do {
		if (tmp == NULL && i > 0)
			return (NULL);
		if (i == 0)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = tmp;
			tmp->prev = new_node;
			new_node->prev = previous_node;
			if (previous_node != NULL)
				previous_node->next = new_node;
			else
				*h = new_node;
			return (new_node);
		}
		previous_node = previous_node == NULL ? tmp : previous_node->next;
		tmp = tmp->next;
		i--;
	} while (1);
}
