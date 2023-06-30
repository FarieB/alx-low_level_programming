#include "main.h"

/**
 * print_number - prints integer numbers.
 * @n: number checked
 * Return: Always 0.
 */

void print_number(int n)

{
	int divider;

	if (n < 0)
	{
		_putchar('-');
	n = -n;
}

	divider = 1;

	while (n / divider >= 10)
{
	divider *= 10;
}

	while (divider > 0)
{
	int digit = n /divider;

	_putchar('0' + digit);
	n %= divider;
	divider /= 10;
}

}
