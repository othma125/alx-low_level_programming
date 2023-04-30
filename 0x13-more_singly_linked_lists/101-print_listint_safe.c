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

	while (h)
	{
		count++;
		printf("[%p] %d\n", (void *)h, h->n);
		if (h < h->next)
		{
			h = h->next;
			printf("-> [%p] %d\n", (void *)h, h->n);
			break;
		}
		if (h == h->next)
			break;
		h = h->next;
	}
	return (count);
}
