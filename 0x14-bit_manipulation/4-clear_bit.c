#include "main.h"
#define MAX_BIT_INDEX 63

/**
 * clear_bit - sets the value of a given bit to 0 at a given index
 * @n: pointer to the number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > MAX_BIT_INDEX)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
