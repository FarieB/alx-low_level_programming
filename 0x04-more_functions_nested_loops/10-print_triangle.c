#include "main.h"

/**
 * print_triangle - function that draws a triangle
 * @size: size of triangle
 * Description: function that draws a triangle
 * Return: triangle
 */

void print_triangle(int size)
{
	int enumerate;
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (enumerate = 1; enumerate <= size; enumerate++)
		{
			for (i = size - enumerate; i >= 1; i--)
			{
				_putchar(32);
			}
			for (j = 1; j <= enumerate; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
