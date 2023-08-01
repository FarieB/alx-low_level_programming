#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_listint - function that prints all the elements of a listint_t list
  * @h: pointer to the head of the list
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)

{
	size_t num_nodes = 0;
	const listint_t *curr_node = h;

	while (curr_node != NULL)
	{
		printf("%d\n", curr_node->n);
		curr_node = curr_node->next;
		num_nodes++;
	}

return (num_nodes);
}
