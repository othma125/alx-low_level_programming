#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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
		exit(98);
	}
	node = h;
	while (node)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		if (h <= node->next)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
		node = node->next;
		count++;
	}
	return (count);
}
