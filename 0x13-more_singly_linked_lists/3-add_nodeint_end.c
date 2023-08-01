#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end of a list
* @head: pointer to the address of the head of the list
* @n: integer for the new node
* Return: the address of the new element
*	or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new_node, *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	*head = new_node;

	else
	{
		temp = *head;
		while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	}

return (*head);
}
