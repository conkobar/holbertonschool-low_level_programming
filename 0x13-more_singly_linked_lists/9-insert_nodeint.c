#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: first node in list
 * @idx: index of list where node should be added
 * @n: contents of new node
 * Return: address of new node of NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx && temp; i++)
	{
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (new);	
}
