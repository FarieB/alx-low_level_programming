#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers.
* Return: 0 (success)
*/
int main(void)
{
int i;
long j = 0, k = 1, temp;

for (i = 0; i < 50; i++)
{
if (i < 2)
{
printf("%ld", i);
}
else
{
temp = j + k;
printf(", %ld", temp);
j = k;
k = temp;
}
}

printf("\n");
return 0;
}
