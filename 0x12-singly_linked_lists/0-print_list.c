#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: list
 * Return: node count
 */

size_t print_list(const list_t *h)
{
	int count;

	if (!h)
		return (count);

	for (count = 0; h; count++)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] ^%s\n", h->len, h->str);

		h = h->next;
	}
	return (count);
}
