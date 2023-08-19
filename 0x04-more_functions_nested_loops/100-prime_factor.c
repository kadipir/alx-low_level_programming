#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
long int a, b, c;

a =  612852475143;
for (b = 1 ; b <= a ; b++)
{
if (a % b == 0)
{
if (a == b)
{
printf("%ld\n", b);
}
c = a / b;
a = c;
}
}
return (0);
}

