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

	if (h == NULL)
		return (count);
	while (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		if (h <= h->next)
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			break;
		}
		h = h->next;
		count++;
	}
	return (count);
}
