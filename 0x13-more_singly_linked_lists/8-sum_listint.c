#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data
* @head: pointer to the head of the list
* Return: sum of data
*	0 if the list is empty
*/

int sum_listint(listint_t *head)

{
	int sum = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
