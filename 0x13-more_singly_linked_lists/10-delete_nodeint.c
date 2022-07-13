#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list
 * @head: first node of list
 * @index: node to delete
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *idx;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}

	idx = temp->next;
	temp->next = idx->next;
	free(idx);

	return (1);
}
