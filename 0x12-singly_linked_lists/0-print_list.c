#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the list
 * Return: The number of nodes
 *	If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

while (h != 0)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");

	else
		printf("[%d] %s\n", h->len, h->str);

	num_nodes++;
	h = h->next;
	}

return (num_nodes);
}
