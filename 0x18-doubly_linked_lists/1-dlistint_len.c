#include "lists.h"

/**
 * dlistint_len - returns the # of elements in a list
 * @h: head of list
 * Return: # of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
