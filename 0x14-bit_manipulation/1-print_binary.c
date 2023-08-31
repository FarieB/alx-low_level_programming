#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to be printed
*/

void print_binary(unsigned long int n)
{
	int a = 0;
	int count = 0;
	unsigned long int current;

	while (a < 64)
	{
		current = n << a;

		if (current >> 63)
	{
		_putchar('1');
		count++;
	}
	else if (count)
	{
		_putchar('0');
	}

	a++;
	}

	if (!count)
	{
		_putchar('0');
}
}
