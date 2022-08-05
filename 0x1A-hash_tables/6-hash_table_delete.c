#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash tables
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp, *loc;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		loc = ht->array[i];

		while (loc)
		{
			tmp = loc;
			loc = loc->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
