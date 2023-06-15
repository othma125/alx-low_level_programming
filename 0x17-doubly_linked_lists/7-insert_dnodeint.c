#include "lists.h"

/**
 * len - check the code
 * @h: list head
 * Return: list size
 */
unsigned int len(dlistint_t *h)
{
	if (!h)
		return (0);
	return (1 + len(h->next));
}
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
	unsigned int length = len(*h), j = 0;

	if (length < i)
		return (NULL);
	if (i == 0)
		new_node = add_dnodeint(h, n);
	else if (i == length)
		new_node = add_dnodeint_end(h, n);
	while (i != j)
	{
		tmp = tmp->next;
		j++;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = tmp;
	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;
        return (new_node);
}
