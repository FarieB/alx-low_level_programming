#include "main.h"

/**
  **_memcpy - function that copies memory area
  *@n: bytes to be copied
  *@src: source memory area
  *@dest: destination memory area
  *Return: pointer to @dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
