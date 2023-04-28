#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - check the code
 * @h: list header
 * @n: integer to add
 * Return: new list head
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *node;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*h == NULL)
		*h = new_node;
	else
	{
		node = *h;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
	return (*h);
}
