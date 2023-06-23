#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: n is the num of times the line
 * Description: function that draws a straight line in the terminal
 * Return: line of characters
 */

void print_line(int n)
{
	int enumerate;

	enumerate = 0;
	while (enumerate < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
			enumerate++;
		}
	}
	_putchar('\n');
}
