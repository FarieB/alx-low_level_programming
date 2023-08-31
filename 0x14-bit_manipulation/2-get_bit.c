#include "main.h"
#define MAX_BIT_INDEX 63

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int mask;

	if (index > MAX_BIT_INDEX)
		return (-1);

	mask = (n >> index) & 1;

	return (mask);
}

