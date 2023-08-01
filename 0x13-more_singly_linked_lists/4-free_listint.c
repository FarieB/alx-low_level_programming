#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_listint - function that frees a listint_t list.
  * @head: pointer to the list
  */

void free_listint(listint_t *head)

{
	listint_t *curr_node = head;
	listint_t *next;

	while (curr_node != NULL)
	{
		next = curr_node->next;
		free(curr_node);
		curr_node = next;
	}
}
