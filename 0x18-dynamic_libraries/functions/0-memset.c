#include "main.h"

/**
  **_memset - function fills the first n bytes
  *@n: number of times to copy b
  *@s: memory to be filled
  *@b: character to copy
  *Return: pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
