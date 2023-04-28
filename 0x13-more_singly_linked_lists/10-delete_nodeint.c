#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - check the code
 * @h: list head
 * @index: targeted index
 * Return: list node
 */
int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
	listint_t *previous_node = NULL, *node = *h;

	while (node != NULL)
	{
		if (index == 0)
		{
			if (previous_node != NULL)
				previous_node->next = node->next;
			else
				*h = node->next;
			free(node);
			return (1);
		}
		previous_node = previous_node == NULL ? node : previous_node->next;
		node = node->next;
		index--;
	}
	return (-1);
}
