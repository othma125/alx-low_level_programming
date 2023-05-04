#include "lists.h"
#include <stdio.h>

/**
 * detect_cycle - check the code
 * @h: list head
 * Return: list length
 */
size_t detect_cycle(const listint_t *h)
{
	const listint_t *slow, *fast;
	size_t count = 1;

	if (h == NULL || h->next == NULL)
		return (0);
	slow = h->next;
	fast = slow->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = h;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
			}
			return (count);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - check the code
 * @h: list head
 * Return: list size
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t cycle = detect_cycle(h), count = 0;

	while (h && count < (cycle == 0 ? count + 1 : cycle))
	{
		count++;
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
	}
	if (cycle > 0)
		printf("-> [%p] %d\n", (void *)h, h->n);
	return (count);
}
