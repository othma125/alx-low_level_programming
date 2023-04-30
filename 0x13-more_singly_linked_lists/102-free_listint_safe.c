#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - check the code
 * @h: list head
 * Return: list size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	node = *h;
	while (node != NULL)
	{
		count++;
		if (node <= node->next)
		{
			tmp = node->next;
			free(node);
			node = NULL;
			break;
		}
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*h = NULL;
	return (count);
}
