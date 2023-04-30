#include "lists.h"
#include <stdio.h>
#define abs(x) ((x) < 0 ? (x) * -1 : (x))

/**
 * print_listint_safe - check the code
 * @h: list head
 * Return: list size
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t count = 0;
	long int max = 0, dist;

	while (h)
	{
		count++;
		printf("[%p] %d\n", (void *)h, h->n);
		dist = abs(h - h->next);
		if (dist < max)
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			break;
		}
		max = dist > max ? dist : max;
		h = h->next;
	}
	return (count);
}
