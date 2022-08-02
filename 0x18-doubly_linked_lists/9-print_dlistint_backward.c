#include "lists.h"

/**
* print_dlistint_backward - prints elements of a list backwards
* @h: list
*
* Return: # of elements
*/
size_t print_dlistint_backward(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h->next)
		h = h->next;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->prev;
	}

	return (count);
}
