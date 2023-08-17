#include "main.h"
/**
 *
 *
 *
 */
void print_line(int n)
{
int a;
for (a = 0 ; a <= n; n++)
{
if (n > 0)
{
_putchar('_');
}
else
{
_putchar("\n");
}
}
_putchar('\n');
}
