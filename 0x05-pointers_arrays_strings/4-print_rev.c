#include "main.h"

/**
* print_rev - function that prints a string in reverse.
* @s: pointer to the string
* Return: Always zero
*/

void print_rev(char *s)

{
	int reverse = 0;

	while (s[reverse])
	reverse++;
	while (reverse--)
	_putchar(s[reverse]);

_putchar('\n');

}

