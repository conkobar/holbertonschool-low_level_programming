#include "lists.h"

/** print_listint - prints all elements of a specific list
 * @h: a specific list
 * Return: node count
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
