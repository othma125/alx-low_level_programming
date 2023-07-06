#include "hash_tables.h"

/**
 * hash_table_print - check the code
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp;
	int c = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		tmp = ht->array[index];
		if (tmp)
		{
			if (c)
				printf(", ");
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
			c = 1;
		}
	        index++;
	}
	printf("}\n");
}
