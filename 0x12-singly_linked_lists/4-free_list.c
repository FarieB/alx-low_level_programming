#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: A pointer to the node
 */

void free_list(list_t *head)

{
	list_t *temp_ptr;

	while (head)
	{
		temp_ptr = head->next;
		free(head->str);
		free(head);
		head = temp_ptr;
	}
}
