#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: list
 * @index: node, starting from 0
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
