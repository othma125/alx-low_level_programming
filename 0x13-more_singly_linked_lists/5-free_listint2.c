#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - check the code
 * @h: listheader
 * Return: none
 */
void free_listint2(listint_t **h)
{
	listint_t *node;

	if (*h == NULL)
		return;
	if ((*h)->next != NULL)
	{
		node = (*h)->next;
		free(*h);
		*h = NULL;
		free_listint2(&node);
		return;
	}
	free(*h);
	*h = NULL;
}
