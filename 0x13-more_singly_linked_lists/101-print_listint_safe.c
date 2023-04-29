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
	const listint_t *prv = NULL;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		if ((prv != NULL && h >= prv)
		    || (prv == NULL && h == h->next))
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			exit(98);
		}
		prv = prv == NULL ? h : prv->next;
		h = h->next;
		count++;
	}
	return (count);
}
