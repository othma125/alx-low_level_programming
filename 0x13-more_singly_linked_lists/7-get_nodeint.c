#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @h: listheader
 * @index: targeted index
 * Return: list node
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	if (h == NULL)
		return (NULL);
	if (index == 0)
		return (h);
	return (get_nodeint_at_index(h->next, index - 1));
}
