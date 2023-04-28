#include "lists.h"

/**
 * sum_listint - check the code
 * @h: list head
 * Return: list sum
 */
int sum_listint(listint_t *h)
{
	if (h == NULL)
		return (0);
	return (h->n + sum_listint(h->next));
}
