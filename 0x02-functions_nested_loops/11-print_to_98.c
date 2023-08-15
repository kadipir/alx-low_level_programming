#include "main.h"
/**
 * print_to_98 - prints natural numbers to 98
 * Return: no value
 */
void print_to_98(int n)
{
for (; n < 99 ; n++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
for (; n >= 98 ; n--)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}

