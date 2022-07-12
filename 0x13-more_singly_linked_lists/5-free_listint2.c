#include "lists.h"

/**
 * free_listint2 - frees a specific list & sets the head to NULL
 * @head: list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (!*head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
