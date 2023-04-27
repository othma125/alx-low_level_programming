#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - check the code
 * @h: listheader
 * @s: string to add
 * Return: new list head
 */
list_t *add_node(list_t **h, const char *s)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(s);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = *h;
	*h = new_node;
	return (new_node);
}
