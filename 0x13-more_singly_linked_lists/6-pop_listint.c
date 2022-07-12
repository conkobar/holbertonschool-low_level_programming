#include "lists.h"

/**
 * pop_listint - deletes head of list & returns the node's data
 * @head: list
 * Return: deleted node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
