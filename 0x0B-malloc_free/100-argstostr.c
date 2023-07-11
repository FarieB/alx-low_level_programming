#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - function that concatenates all the arguments
  * @ac: number of arguements passed to program
  * @av: array of pointers to arguements
  * Return: NULL if ac == 0 or av == NULL
  * a pointer to a new string
  * NULL if it fails
  */

char *argstostr(int ac, char **av)

{
	char *str;
	int argmt, i, j, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argmt = 0; argmt < ac; argmt++)
	{
		for (i = 0; av[argmt][i]; i++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	j = 0;

	for (argmt = 0; argmt < ac; argmt++)
	{
		for (i = 0; av[argmt][i]; i++)
			str[j++] = av[argmt][i];

		str[j++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
