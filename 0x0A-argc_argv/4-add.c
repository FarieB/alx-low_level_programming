#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: counts number of arguments
 * @argv: Array of pointers
 * Return: 0 If no number is passed to the program
 * 1 If one of the number contains symbols that are not digits
 */

int main(int argc, char *argv[])

{
	int a, b, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			length = strlen(ptr);

			for (b = 0; b < length; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[a]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
