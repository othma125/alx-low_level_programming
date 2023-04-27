#include "lists.h"
#include <stdlib.h>

/**
 * free_list - check the code
 * @h: listheader
 * Return: none
 */
void free_list(list_t *h)
{
	list_t *node;

	while (h != NULL)
	{
		node = h->next;
		free(h->str);
		free(h);
		h = node;
	}
}
