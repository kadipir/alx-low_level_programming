#include "main.h"
/**
 * more_numbers - prints 0 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{
int a;
int b;

for (a = 0 ; a <= 9 ; a++)
{
for (b = 0 ; b <= 14 ; a++)
{
if (b > 9)
{
_putchar((b / 10) + '0');
}
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
