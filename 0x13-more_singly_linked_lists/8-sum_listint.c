#include "lists.h"

/**
 * sum_listint - returns sum of all data in a list
 * @head: first node of list
 * Return: sum of nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
