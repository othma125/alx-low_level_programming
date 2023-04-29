#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - check the code
 * @h: list head
 * Return: list pointer
 */
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *prv = NULL;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		if ((prv != NULL && (unsigned long)h > (unsigned long)prv)
		    || (prv == NULL && h == h->next))
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			return (h);
		}
		printf("[%p] %d\n", (void *)h, h->n);
		prv = prv == NULL ? h : prv->next;
		h = h->next;
	}
	return (NULL);
}
