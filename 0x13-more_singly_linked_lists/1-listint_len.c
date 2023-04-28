#include "lists.h"

/**
 * listint_len - check the code
 * @h: listheader
 * Return: list size
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + listint_len(h->next));
}
