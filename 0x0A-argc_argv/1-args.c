#include "main.h"
#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: counts number of arguments
 * @argv: Array of pointers
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (a = 0; *argv; a++, argv++)
			;

		printf("%d\n", a - 1);
	}

	return (0);
}
