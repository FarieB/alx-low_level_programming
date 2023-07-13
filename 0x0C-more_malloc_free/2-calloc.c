#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - function that allocates memory for an array
  * @nmemb: memory to be allocated
  * @size: size of the memory
  * Return: Pointer
  * NULL If nmemb or size is 0
  * NULL is it fails
  */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	ptr = malloc(j);

	if (ptr == NULL)
		return (NULL);

	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}

