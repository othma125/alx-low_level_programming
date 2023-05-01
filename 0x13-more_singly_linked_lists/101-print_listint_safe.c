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
int detect_cycle(memory_block *mbs, const listint_t *node, int m)
{
	int i;

	for (i = 0; i <= m; i++)
	{
		if ((mbs[i].index <= 0 && mbs[i].ptr - node <= 2 * mbs[i].index)
		    || (mbs[i].index >= 0 && mbs[i].ptr - node >= 2 * mbs[i].index))
			return (i);
	}
	return (-1);
}
/**
 * print_listint_safe - check the code
 * @h: list head
 * Return: list size
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t count = 0;
	int m = 0;
	long dist;
	memory_block mbs[10];

	if (!h)
		return (count);
	mbs[m].index = 0;
	mbs[m].ptr = h;
	while (h)
	{
		count++;
		printf("[%p] %d\n", (void *)h, h->n);
		dist = h - h->next;
		h = h->next;
		if (detect_cycle(mbs, h, m) > 0)
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			break;
		}
		if (dist == 2 && mbs[m].index <= 0)
			mbs[m].index--;
		else if (dist == -2 && mbs[m].index >= 0)
			mbs[m].index++;
		else
		{
			m++;
			mbs[m].index = 0;
			mbs[m].ptr = h;
		}
	}
	return (count);
}
