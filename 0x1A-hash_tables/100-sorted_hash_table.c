#include "hash_tables.h"
/**
 * shash_table_create - check code
 * @size: unsigned long int
 * Return: sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_get - check the code
 * @ht: hash table
 * @key: string key
 * Return: value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (!tmp)
		return (NULL);
	while (tmp->next && strcmp(key, tmp->key) != 0)
		tmp = tmp->next;
	if (strcmp(key, tmp->key) == 0)
		return (tmp->value);
	return (NULL);
}
/**
 * shash_table_delete - check code
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(ht->array);
	free(ht);
}
/**
 * insert_new_node - check the code
 * @ht: hash table
 * @new: hash node
 * Return: nothing
 */
void insert_new_node(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp;

	if (!ht->shead)
	{
		new->sprev = NULL, new->snext = NULL;
		ht->shead = new, ht->stail = new;
	}
	else if (strcmp(ht->shead->key, new->key) > 0)
	{
		new->sprev = NULL, new->snext = ht->shead;
		ht->shead->sprev = new, ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, new->key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp, new->snext = tmp->snext;
		if (!tmp->snext)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
}
/**
 * shash_table_set - check the code
 * @ht: hash table
 * @key: string key
 * @value: string value
 * Return: success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	for (new = ht->array[index]; new; new = new->next)
	{
		if (!strcmp(key, new->key))
		{
			free(new->value), new->value = strdup(value);
			return (1);
		}
	}
	new = malloc(sizeof(shash_node_t *));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key), free(new);
		return (0);
	}
	new->next = ht->array[index], ht->array[index] = new;
	insert_new_node(ht, new);
	return (1);
}
/**
 * shash_table_print - check the code
 * @ht: hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		if (ht->shead != tmp)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - check the code
 * @ht: hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp)
	{
		if (ht->stail != tmp)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
	}
	printf("}\n");
}
