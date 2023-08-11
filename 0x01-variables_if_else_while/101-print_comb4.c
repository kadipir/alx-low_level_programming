#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{int x, y, z;
for (x = 0 ; x < 10 ; x++)
{
for (y = 0 ; y < 10 ; y++)
{
for (z = 0 ; z < 10 ; z++)
if (x < y && x < z)
{
if (y < z)
{putchar((x % 10) + '0');
putchar((y % 10) + '0');
putchar((z % 10) + '0');
{
if (x == 7)
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
