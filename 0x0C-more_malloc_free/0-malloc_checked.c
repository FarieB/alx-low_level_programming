#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
  * malloc_checked - function that allocates memory
  * @b: allocated size
  * Return: pointer to the allocated memory
  * or 98 if it fails
  */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
