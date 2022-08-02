#include "lists.h"

/**
 * sum_dlistint - sums up all data in a list of ints
 * @head: list of ints
 *
 * Return: sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
