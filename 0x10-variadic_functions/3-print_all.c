#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of arguments types
 * Return: 0
 */

void print_all(const char * const format, ...)

{
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *strng;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			strng = va_arg(valist, char *);
			if (strng == NULL)
				strng = "(nil)";
			printf("%s%s", strng, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
