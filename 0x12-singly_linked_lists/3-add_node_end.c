#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - check the code
 * @h: list header
 * @s: string to add
 * Return: new list head
 */
list_t *add_node_end(list_t **h, const char *s)
{
	list_t *new_node = malloc(sizeof(list_t)), *node;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(s);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(s);
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
