#include "search_algos.h"
#include <math.h>

/**
 * jump_list - check code
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if value
 * is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, j, k = sqrt(size);
	listint_t *node = list;

	if (!list || size == 0)
		return (NULL);
	while (node->next && node->n < value)
	{
		i += k;
		for (j = 0; j < k && node->next; j++)
		{
			node = node->next;
			if (node->n >= value)
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - k, node->index);
	while (node->next && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	return ((node->n == value) ? node : NULL);
}
