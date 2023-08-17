#include "main.h"
/**
 * more_numbers - prints numbers ten times
 * Return: void
 */
void more_numbers(void)
{
int a, b;
for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b < 15 ; a++)
{
if (b > 9)
{
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
}
else
{
putchar(a + '0');
}
}
_putchar('\n');
}
}
