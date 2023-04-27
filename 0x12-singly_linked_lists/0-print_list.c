#include "lists.h"
#include <stdio.h>

/**
 * print_list - check the code
 * @h: listheader
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("[%lu] %s\n", h->str == NULL ? "(nil)" : h->str
		       , h->str == NULL ? 0 : len);
		n++;
		h = h->next;
	}
	return (n);
}
