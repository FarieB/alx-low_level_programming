#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the head of the list
* @idx: is the index of the list where the new node should be added
* Index starts at 0
* Returns: the address of the new node,
*	or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	return (new_node);
	}

	temp = *head;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

return (new_node);
}

