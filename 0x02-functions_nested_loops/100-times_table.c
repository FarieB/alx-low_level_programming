#include "main.h"
/**
* print_times_table - prints the times table for n starting with 0.
* @n: value of times table printed
* Return: empty output
*/
void print_times_table(int n)
{
int a, b, outp;

if (!(n > 15 || n < 0))
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
outp = (a * b);
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (outp < 10 && b != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((outp % 10) + '0');
}
else if (outp >= 10 && outp < 100)
{
_putchar(' ');
_putchar((outp / 10) + '0');
_putchar((outp % 10) + '0');
}
else if (outp >= 100 && b != 0)
{
_putchar((outp / 100) + '0');
_putchar((outp / 10) % 10 + '0');
_putchar((outp % 10) + '0');
}
else
_putchar((outp % 10) + '0');
}
_putchar('\n');
}
}
}
