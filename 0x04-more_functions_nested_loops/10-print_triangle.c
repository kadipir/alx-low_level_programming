#include "main.h"
/**
 *
 *
 *
 */ 
void print_triangle(int size)
{       
int a, b;
for (a = 0 ; a <= size ; a++)
{
for (b = 0 ; b <= size ; b++)
{
if (size > 0)
{
_putchar('#');
_putchar('\n');
}
else
{
_putchar('\n');
}
}       
}       
}       
