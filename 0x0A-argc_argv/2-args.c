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

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
