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
			new_node->prev = tmp->prev;
			if (tmp->prev != NULL)
			{
				tmp->prev->next = new_node;
				tmp->prev = new_node;
			}
			else
				*h = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i--;
	} while (1);
}
