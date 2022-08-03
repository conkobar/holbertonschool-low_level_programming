#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node @ index of a list
 * @head: list
 * @index: member # of element to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (!head || !*head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;

		if (tmp->next)
			(*head)->prev = NULL;

		free(tmp);
		return (1);
	}

	for (i = 0; tmp && i < index; tmp = tmp->next, i++)
	{
		if (!tmp)
			return (-1);
	}

	tmp->prev->next = tmp->next;

	if (tmp->next)
		tmp->next->prev = tmp->prev;

	else
		tmp->next = NULL;

	free(tmp);
	return (1);
}
