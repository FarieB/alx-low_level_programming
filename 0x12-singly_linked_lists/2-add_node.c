#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the node
 * @str: string to be duplicated
 * Return: the address of the new element, or
 *	NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len] != '\0';)
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
