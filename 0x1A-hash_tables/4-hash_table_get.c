#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to find
 *
 * Return: value of key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node;

	if (ht && key)
	{
		for (node = ht->array[idx]; node; node = node->next)
		{
			if (!strcmp(node->key, key))
				return (node->value);
		}
	}

	return (NULL);
}
