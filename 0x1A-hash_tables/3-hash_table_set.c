#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: table to be added to
 * @key: key; cannot be an empty string
 * @value: value of key; must be duped; can be empty
 *
 * Return: 1 on success, or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp, *new = malloc(sizeof(hash_node_t));

	if (!ht || !key || !new)
		return (0);


	idx = (hash_djb2((const unsigned char *)key)) % (ht->size);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	tmp = new->next;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new->next = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			break;
		}
		tmp = tmp->next;
	}

	ht->array[idx] = new;

	return (1);
}
