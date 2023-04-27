#include "lists.h"

/**
 * list_len - check the code
 * @h: listheader
 * Return: list size
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
