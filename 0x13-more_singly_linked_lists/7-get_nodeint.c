#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of list
 * @head: first node in list
 * @index: index of node
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index && head; i++)
		head = head->next;

	return (head);
}
