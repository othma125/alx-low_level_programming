#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - check the code
 * @h: list head
 * Return: list pointer
 */
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *loop_node = NULL;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		if (h->next == loop_node)
		{
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			return (loop_node);
		}
		loop_node = loop_node == NULL && h->n == (h->next)->n + 1 ? h : loop_node;
		h = h->next;
	}
	return (NULL);
}
