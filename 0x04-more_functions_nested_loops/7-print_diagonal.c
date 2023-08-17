#include "main.h"
/**
 * print_diagonal - prints the character '/'
 * @n: the number of times the character will be printed
 */
void print_diagonal(int n)
{
int a;

for (a = 0 ; a < n ; n++)
{
if (a > 0)
{
_putchar(92);
_putchar('\n');
}
else
{
_putchar('\n');
}
}
}
