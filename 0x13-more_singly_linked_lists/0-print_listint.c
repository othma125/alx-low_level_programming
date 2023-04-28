#include "lists.h"
#include <stdio.h>

/**
 * print_listint - check the code
 * @h: listheader
 * Return: list size
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
