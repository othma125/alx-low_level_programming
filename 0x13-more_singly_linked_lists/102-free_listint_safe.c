#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - check the code
 * @h: list head
 * Return: list size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *prv = NULL;
	listint_t *node, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	node = *h;
	while (node != NULL)
	{
		if ((prv != NULL && (unsigned long)node > (unsigned long)prv)
		    || (prv == NULL && node == node->next))
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)node, node->n);
		prv = prv == NULL ? node : prv->next;
		tmp = node;
		node = node->next;
		free(tmp);
		count++;
	}
	*h = NULL;
	return (count);
}
