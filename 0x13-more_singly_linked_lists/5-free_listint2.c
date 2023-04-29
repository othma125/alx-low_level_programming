#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - check the code
 * @h: list head
 * Return: none
 */
void free_listint2(listint_t **h)
{
	listint_t *node, *tmp;

	if (h == NULL || *h == NULL)
		return;
	node = *h;
	while (node != NULL)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*h = NULL;
}
