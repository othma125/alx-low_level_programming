#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - check the code
 * @h: list head
 * Return: list pointer
 */
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *slow, *fast;

	if (h == NULL || h->next == NULL)
		return (NULL);
	slow = h->next;
	fast = slow->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (NULL);
}
