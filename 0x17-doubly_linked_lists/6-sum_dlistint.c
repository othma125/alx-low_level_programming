#include "lists.h"
/**
 * sum_dlistint - check the code
 * @h: list head
 * Return: list sum
 */
int sum_dlistint(dlistint_t *h)
{
	if (!h)
		return (0);
	return (h->n + sum_dlistint(h->next));
}
