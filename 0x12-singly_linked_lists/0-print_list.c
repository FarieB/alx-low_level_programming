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
	size_t node = 0;

	do {

		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		node++;
		h = h->next;
	} while (h != NULL);

	return (node);
}
