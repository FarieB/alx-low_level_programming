#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_listint2 - function that frees a listint_t list
  * @head: pointer to the address of the head of the list
  */

void free_listint2(listint_t **head)

{
	listint_t *curr_node = *head;

	if (*head == NULL)
	return;

	while (curr_node != NULL)
	{
		listint_t *temp = curr_node;

		curr_node = curr_node->next;
		free(temp);
	}

	*head = NULL;
}
