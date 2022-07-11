#include "lists.h"

/**
 * listint_len - returns node count of list
 * @h: list
 * Return: node count
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
