#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	while (exclusive > 0)
	{
		if (exclusive & 1)
			count++;

		exclusive >>= 1;
	}

	return (count);
}

