#include "main.h"
#define MAX_BIT_INDEX 63

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > MAX_BIT_INDEX)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

