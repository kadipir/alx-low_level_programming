#include "main.h"
/**
 * print_bi - entry point
 * @n: decimal input
 * Return: void
 */
void print_bi(unsigned int n)
{
if (n == 0)
{
return;
}
print_bi(n >> 1);
if ((n & 1) == 1)
{
_putchar('1');
}
if ((n & 1) == 0)
{
_putchar('0');
}
}
/**
 * print_binary - entry point
 * @n: decimal to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
}
else
{
print_bi(n);
}
}
