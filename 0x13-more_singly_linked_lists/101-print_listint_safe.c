#include "lists.h"
#include <stdio.h>

#define abs(x) ((x) < 0 ? ((x) * -1) : (x))
/**
 * detect_cycle - check the code
 * @mbs: blocks array
 * @node: list head
 * @m: blocks count
 * Return: boolean
 */
int detect_cycle(memory_block *mbs, const listint_t *node, unsigned int m)
{
	unsigned int i;

	for (i = 0; i <= m; i++)
	{
		if (abs(mbs[i].ptr - node) <= 2 * mbs[i].count)
			return (1);
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
	size_t count = 0;
	unsigned int m = 0;
	unsigned long dist;
	memory_block mbs[100];

	if (!h)
		return (count);
	mbs[m].count = 0;
	mbs[m].ptr = h;
	while (h)
	{
		count++;
		printf("[%p] %d\n", (void *)h, h->n);
		dist = abs(h - h->next);
		h = h->next;
		if (detect_cycle(mbs, h, m))
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			break;
		}
		if (dist == 2)
			mbs[m].count++;
		else
		{
			m++;
			mbs[m].count = 0;
			mbs[m].ptr = h;
		}
	}
	return (count);
}
