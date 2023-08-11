#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{char c;
for (c = '0' ; c <= '9' ; c++)
putchar(c);
if (c <= '8')
putchar(',')
putchar(' ')
putchar('\n');
return (0);
}
