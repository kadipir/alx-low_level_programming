#include "main.h"
/**
 *
 *
 */
void print_array(int *a, int n)
{
int x;
for (x = 0 ; x < n ; x++)
{
printf("%d", x);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
