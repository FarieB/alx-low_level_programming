#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * listint_len - function that returns the number of elements in a linked list
  * @h: pointer to the list
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)

{
	size_t num_elements = 0;

	while (h != NULL)
	{
		num_elements++;
		h = h->next;
	}

return (num_elements);
}
