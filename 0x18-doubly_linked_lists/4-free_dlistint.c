#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		if(head->prev)
			free(head->prev);

		if (!head->next)
			free(head);

		head = head->next;
	}
}
