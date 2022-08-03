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
	dlistint_t *tmp = NULL;

	if (*head)
	{
		tmp = *head;

		for (i = 0; i < index; i++)
			tmp = tmp->next;


		if (tmp)
		{
			if (*head == tmp)
				*head = tmp->next;

			if (tmp->prev)
				tmp->prev->next = tmp->next;

			if (tmp->next)
				tmp->next->prev = tmp->prev;

			free(tmp);
			return (1);
		}
	}

	return (-1);
}
