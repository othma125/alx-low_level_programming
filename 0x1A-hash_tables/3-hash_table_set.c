#include "hash_tables.h"

/**
 * hash_table_set - check the code
 * @ht: hash table
 * @key: string key
 * @value: string value
 * Return: success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t *));
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
		free(new->key);
		free(new);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
