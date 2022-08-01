#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlist
 * @h: head
 * Return: # of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *node = h;

	for (count = 0; node; count++)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
	return (count);
}
