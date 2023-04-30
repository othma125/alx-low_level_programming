#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - check the code
 * @h: list head
 * Return: list size
 */
size_t print_listint_safe(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("[%p] %d\n", (void *)h, h->n);
	if (h <= h->next)
	{
		h = h->next;
		printf("-> [%p] %d\n", (void *)h, h->n);
		return (0);
	}
	return (1 + print_listint_safe(h->next));
}
