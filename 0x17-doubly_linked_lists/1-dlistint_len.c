#include "lists.h"
/**
 * dlistint_len - check the code
 * @h: list head
 * Return: list size
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);
	return (1 + dlistint_len(h->next));
}
