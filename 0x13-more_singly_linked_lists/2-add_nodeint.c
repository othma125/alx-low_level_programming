#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - check the code
 * @h: listheader
 * @n: integer to add
 * Return: new list head
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *h;
	*h = new_node;
	return (new_node);
}
