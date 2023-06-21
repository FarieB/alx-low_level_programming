#include <stdio.h>
/**
* main - computes and prints the sum of all the multiples of 3 or 5 below 1024.
* Return: empty output
*/

int main(void)
{
int a, outp;

for (a = 0; a < 1024; a++)
if (a % 3 == 0 || a % 5 == 0)
outp += a;
printf("%d\n", outp);
return (0);
}
