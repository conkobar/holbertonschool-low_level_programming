#include "lists.h"

/**
 * list_len - prints node count of list
 * @h: list
 * Return: node count
 */

size_t list_len(const list_t *h)
{
	list_t *node = (list_t *)h;
	int count = 0;

	while (node)
	{
		node = node->next;
		count++;
	}

	return (count);
}
