#include "main.h"

/**
 * print_square - function that prints a square
 * @size:  size of the square
 * Description: function that prints a square
 * Return: square
 */

void print_square(int size)
{
	int i;
	int enumerate;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (enumerate = 0; enumerate < size; enumerate++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
