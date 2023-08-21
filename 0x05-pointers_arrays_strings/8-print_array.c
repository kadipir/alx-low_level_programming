#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of integers
 * @n: numbers of elements in array
 * @a: pointer
 */
void print_array(int *a, int n)
{
*a = n;
int x;
for (x = 0 ; x < n ; x++)
{
printf("%d", x);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
