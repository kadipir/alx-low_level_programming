#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{char n, y;
for (n = '0' ; n <= '9' ; n++)
putchar(n);
for (y = 'a' ; y <= 'f' ; y++)
putchar(y);
putchar('\n');
return (0);
}
