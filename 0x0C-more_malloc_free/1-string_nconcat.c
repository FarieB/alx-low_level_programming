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
	unsigned int i = 0, j = 0, a = 0, b = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[a])
		a++;

	if (n >= a)
		b = i + a;
	else
		b = i + n;

	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
		return (NULL);

	a = 0;
	while (j < b)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[a];
			a++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
