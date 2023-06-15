#include "lists.h"

/**
 * free_dlistint - check the code
 * @h: listheader
 * Return: none
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *node;

	while (h != NULL)
	{
		node = h->next;
		free(h);
		h = node;
	}
}
