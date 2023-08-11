#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{int c;
for (c = 0 ; c <= 9 ; c++)
putchar((c % 10) + '0');
if (c <= 8)
{putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
