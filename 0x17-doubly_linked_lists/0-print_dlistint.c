#include "lists.h"
/**
 * print_dlistint - check the code
 * @h: list head
 * Return: list size
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
