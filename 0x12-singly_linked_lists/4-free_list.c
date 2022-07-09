#include "lists.h"

/**
 * free_list - frees list from mem
 * @head: list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		free(head->str);
		head = temp;
	}
}
