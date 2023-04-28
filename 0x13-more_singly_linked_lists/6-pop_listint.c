#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - check the code
 * @h: listheader
 * Return: head list content
 */
int pop_listint(listint_t **h)
{
	int n = 0;
	listint_t *old_head = *h;

	if (old_head == NULL)
		return (n);
	n = old_head->n;
	*h = old_head->next;
	free(old_head);
	return (n);
}
