#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of integers
 * @n: numbers of elements in array
 * @a: pointer
 */
void print_array(int *a, int n)
{
int x;

for (x = 0 ; x < n ; x++)
{
printf("%d", a[x]);
if (x != (n - 1))
{
printf(", ");
}
}
_putchar('\n');
}
