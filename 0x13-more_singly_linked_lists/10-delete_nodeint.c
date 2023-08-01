#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - function that deletes the node at index
* @head: pointer to the address of the head of the list
* @index: index of the node that should be deleted
* Return: 1 if it succeeded,
*	-1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int i = 0;
	listint_t *temp, *nextnode;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		nextnode = *head;
		*head = nextnode->next;
		free(nextnode);
		return (1);
	}

	temp = *head;

	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
	return (-1);

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

return (1);
}
