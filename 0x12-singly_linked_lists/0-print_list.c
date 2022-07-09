#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: list
 * Return: node count
 */

size_t print_list(const list_t *h)
{
	list_t *print = (list_t *)h;
	int count;

	if (!h)
		return (0);

	for (count = 0; print; count++)
	{
		if (!print->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] ^%s\n", print->len, print->str);

		print = print->next;
	}
	return (count);
}
