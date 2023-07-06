#include "hash_tables.h"

/**
 * hash_table_get - check the code
 * @ht: hash table
 * @key: string key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

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
