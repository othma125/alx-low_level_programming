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
	const listint_t *prv = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if ((prv != NULL && (unsigned long)h > (unsigned long)prv)
		    || (prv == NULL && h == h->next))
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)h, h->n);
		prv = prv == NULL ? h : prv->next;
		h = h->next;
		count++;
	}
	return (count);
}
