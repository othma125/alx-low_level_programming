#include "hash_tables.h"

/**
 * hash_table_delete - check code
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *h, *tmp;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			h = ht->array[i];
			while (h != NULL)
			{
				tmp = h->next;
				free(h->key);
				free(h->value);
				free(h);
				h = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
