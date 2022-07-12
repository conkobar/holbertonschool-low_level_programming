#include "lists.h"

/**
 * free_listint2 - frees a specific list & sets the head to NULL
 * @head: list
 */

void free_listint2(listint_t **head)
{

	while (*head)
	{
		free(*head);
		*head = NULL;
	}
}
