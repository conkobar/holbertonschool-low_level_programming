#include "lists.h"

/**
 * add_node_end - adds new node to end of list
 * @head: list
 * @str: node
 * Return: new node or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *temp = *head;
	list_t *node = malloc(sizeof(list_t));

	if (!node)
	{
		free(node);
		return (NULL);
	}

	while (str[i])
		i++;

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = node;

	return (node);
}
