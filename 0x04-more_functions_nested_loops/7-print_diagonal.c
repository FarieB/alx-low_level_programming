#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: n number of times
 * Description: function that draws a diagonal line"
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int enumerate;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (enumerate = 0; enumerate < n; enumerate++)
		{
			for (i = 0; i < enumerate; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
