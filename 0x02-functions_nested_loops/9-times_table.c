#include "main.h"
/**
 * times_table - prints the 9 times table
 * return: empty output
 */
void times_table(void)
{
int a, b, c, x, y;
for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
x = a * b;
if (x > 9)
{
c = x % 10;
y = (x - c) / 10;
_putchar(44);
_putchar(32);
_putchar(y + '0');
_putchar(c + '0');
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(x + '0');
}
}
_putchar('\n');
}
}


