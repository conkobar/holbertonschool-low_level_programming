#include "lists.h"

/**
 * add_node - adds node to head of list
 * @head: node
 * @str: new node
 * Return: &new or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *dupe = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (!dupe)
	{
		free(dupe);
		return (NULL);
	}

	while (str[i])
		i++;

	dupe->str = strdup(str);
	dupe->len = i;
	dupe->next = *head;
	*head = dupe;

	return (*head);
}
