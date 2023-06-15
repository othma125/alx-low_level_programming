#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code
 * @h: list head
 * @i: index
 * Return: success
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int i)
{
	dlistint_t *tmp;
	unsigned int j;

	if (h == NULL || *h == NULL)
		return (-1);
	tmp = *h;
	if (i == 0)
	{
		*h = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	for (j = 0; j < i; j++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
