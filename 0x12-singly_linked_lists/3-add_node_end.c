#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer the head of the node
 * @str: string to be duplicated
 * Return: the address of the new element, or
 *	NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	char *duplicate;
	int len;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len] != '\0';)
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (*head);
}
