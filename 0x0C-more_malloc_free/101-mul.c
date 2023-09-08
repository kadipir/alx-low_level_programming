#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
int num1, num2, mul;

if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
if ((num1 >= 48 || num1<= 57) && (num2 >= 48 || num2 <= 57))
{
mul = num1 + num2;
return (mul);
}
else
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
}
else
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
return (0);
}

