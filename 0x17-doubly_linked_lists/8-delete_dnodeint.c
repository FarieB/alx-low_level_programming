#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
* @head: Pointer to a pointer to the head of the list.
* @index: Index of the node that should be deleted. Index starts at 0.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}

while (temp != NULL && i < index - 1)
{
temp = temp->next;
i++;
}

if (temp == NULL || temp->next == NULL)
return (-1);

current = temp->next;
temp->next = current->next;
if (current->next != NULL)
current->next->prev = temp;

free(current);
return (1);
}

