#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int idx, punk;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];

		for (punk = 0, node = ht->array[idx]; node; node = node->next)
		{
			if (punk)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			punk = 69;
		}
	}
	printf("}\n");
}
