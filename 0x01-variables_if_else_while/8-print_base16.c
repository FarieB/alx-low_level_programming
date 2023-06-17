#include <stdio.h>

/**
 * main - entry point
 *Description: (Prints numbers between 0 to 9 and letters between a to f)
 * Return: Always 0
 */

int main(void)

{

	int n;


	for (n = 48; n < 58; n++)


	{

		putchar(n);

	}

	for (n = 97; n < 103; n++)

	{

		putchar(n);

	}

	putchar('\n');

	return (0);
}
