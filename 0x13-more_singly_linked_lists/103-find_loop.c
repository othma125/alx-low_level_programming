#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - check the code
 * @h: list head
 * Return: list pointer
 */
listint_t *find_listint_loop(listint_t *h)
{
	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		if (h->n == 1 + (h->next)->n)
		{
			h = h->next;
			printf("-> [%p] %d\n", (void *)h, h->n);
			return (h);
		}
		h = h->next;
	}
	return (NULL);
}
