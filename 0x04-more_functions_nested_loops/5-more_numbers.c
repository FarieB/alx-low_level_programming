#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers 0 to 14
 * Description: function that prints 10 times the numbers
 */

void more_numbers(void)
{
	int num;
	int enumerator;

	for (enumerator = 1; enumerator <= 10; enumerator++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			_putchar('1');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
