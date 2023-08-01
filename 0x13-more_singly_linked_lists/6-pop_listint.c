#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t list
* @head: double pointer to the list
* Return: 0 if the linked list is empty return
*	Otherwise, the head node's data (n)
*/

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int h_data = 0;

	if (*head == NULL)
	return (0);

	else
	{
		temp = *head;
		h_data = temp->n;

		*head = (*head)->next;
	}

	free(temp);

return (h_data);

}
