#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - check the code
 * @h: list head
 * Return: list size
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node;

	if (h == NULL)
		return (count);
	if (h == h->next)
	{
		printf("-> [%p] %d\n", (void *)h, h->n);
		return (1);
	}
	node = h;
	while (node)
	{
		if (h <= node->next)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		count++;
	}
	return (count);
}
