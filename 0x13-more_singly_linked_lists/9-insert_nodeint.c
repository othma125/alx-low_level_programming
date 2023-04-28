#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - check the code
 * @h: list head
 * @index: targeted index
 * @n: added value at index
 * Return: list node
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int index, int n)
{
	listint_t *new_node, *previous_node = NULL, *node = *h;

	do {
		if (node == NULL && index > 0)
			return (NULL);
		if (index == 0)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = node;
			if (previous_node != NULL)
				previous_node->next = new_node;
			else
				*h = new_node;
			return (new_node);
		}
		previous_node = previous_node == NULL ? node : previous_node->next;
		node = node->next;
		index--;
	} while (1);
}
