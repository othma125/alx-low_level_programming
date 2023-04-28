#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - check the code
 * @h: listheader
 * Return: none
 */
void free_listint(listint_t *h)
{
	listint_t *node;

	if (h == NULL)
		return;
	if (h->next != NULL)
	{
		node = h->next;
		free(h);
		free_listint(node);
		return;
	}
	free(h);
}
