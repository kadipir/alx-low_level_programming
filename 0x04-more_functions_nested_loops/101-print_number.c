#include "main.h"
/**
 * print_number - printing numbers
 * @n - number to be printed
 */
void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
_putchar(48);
i = -i;
}
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
