#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{int x, y;
for (x = 0 ; x < 100 ; x++)
{
for (y = 0 ; y < 100 ; y++)
{
if (x < y)
{
putchar((x % 10) + '0');
putchar((y % 10) + '0');
putchar(' ');
if (x != 98 || y != 99)
{putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
