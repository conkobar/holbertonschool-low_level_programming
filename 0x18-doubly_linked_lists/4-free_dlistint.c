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

		head = head->next;
	}
	free(head);
}
