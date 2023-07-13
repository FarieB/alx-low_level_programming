#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * array_range - function that creates an array of integers
  * @min: array values
  * @max: array values
  * Return: NULL If min > max
  * NULL If malloc fails
  */

int *array_range(int min, int max)

{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
