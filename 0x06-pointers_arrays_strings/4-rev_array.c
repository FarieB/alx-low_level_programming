#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: size of array.
 * Return: reversed array of integers
 */

void reverse_array(int *a, int n)

{
	int exchange, start, end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		exchange = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = exchange;
		start++;
		end--;
	}
}
