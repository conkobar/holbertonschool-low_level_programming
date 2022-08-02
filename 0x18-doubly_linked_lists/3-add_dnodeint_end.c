#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of list
 * @head: head of list
 * @n: value of node
 * Return: address of node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = new;
		new->prev = tmp;
	}

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
