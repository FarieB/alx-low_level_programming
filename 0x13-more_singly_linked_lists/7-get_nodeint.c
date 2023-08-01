#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a list
* @head: pointer to the head of the list
* @index: index of the node, starting at 0
* Return: node
*	NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	listint_t *node = head;

	while (node != NULL && index > 0)
	{
		node = node->next;
		index--;
	}

return (node);
}
