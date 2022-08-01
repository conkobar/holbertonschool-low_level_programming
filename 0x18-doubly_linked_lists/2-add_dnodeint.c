#include "lists.h"

/**
 * add_dnodeint - adds new node at list head
 * @head: list head
 * @n: value of element
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	if (*head)
	{
		node->next = *head;
		*head = node;
	}

	else
	{
		node->next = NULL;
		*head = node;
	}

	return (node);

}
