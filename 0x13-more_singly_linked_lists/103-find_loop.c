#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - check the code
 * @h: listheader
 * Return: none
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *prv = NULL, *nxt = NULL;

	while (*h != NULL)
	{
		nxt = (*h)->next;
		(*h)->next = prv;
		prv = *h;
		*h = nxt;
	}
	*h = prv;
	return (*h);
}
