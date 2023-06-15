#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @h: list head
 * @i: index
 * Return: list pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int i)
{
	if (h == NULL)
		return (NULL);
	if (i == 0)
		return (h);
	return (get_dnodeint_at_index(h->next, i - 1));
}
