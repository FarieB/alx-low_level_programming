#include "main.h"

/**
* puts_half - function that prints half of a string.
* @str: string input
*/

void puts_half(char *str)

{
	int first_string, half_string;

	first_string = 0;

	while (str[first_string] != '\0')
	first_string++;

	half_string = first_string / 2;

	if (first_string % 2 == 1)
	half_string++;

	while (half_string < first_string)

	{
	_putchar(str[half_string]);
	half_string++;

	}
	_putchar('\n');
}
