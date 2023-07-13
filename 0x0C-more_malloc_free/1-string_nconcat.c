#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates two strings
  * @s1: first string
  * @s2: second string to be linked
  * @n: size of the linked string
  * Return: NULL is string is empty
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i = 0, j = 0, s1_len = 0, s2_len = 0;
	char *strng;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[s1_len])
		s1_len++;

	if (n >= s1_len)
		s2_len = i + s1_len;
	else
		s2_len = i + n;

	strng = malloc(sizeof(char) * s2_len + 1);
	if (strng == NULL)
		return (NULL);

	s2_len = 0;
	while (j < s2_len)
	{
		if (j <= i)
			strng[j] = s1[j];

		if (j >= i)
		{
			strng[j] = s2[s2_len];
			s1_len++;
		}
		j++;
	}
	strng[j] = '\0';
	return (strng);
}
