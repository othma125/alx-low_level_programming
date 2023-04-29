#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - check the code
 * @h: listheader
 * Return: none
 */
void free_listint2(listint_t **h)
{
	listint_t *node = *h;

	while (node != NULL)
	{
		free(node);
		node = node->next;
	}
	*h = NULL;
}
