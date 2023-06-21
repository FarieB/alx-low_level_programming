#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
    char ch[] = "_putchar\n";
    int h = 0;

    while (ch[h] != '\0')
    {
        _putchar(ch[h]);
        h++;
    }

    return 0;
}
