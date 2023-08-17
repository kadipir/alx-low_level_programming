#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
int a;
for (a = 1 ; a < 101 ; a++)
{
if (a % 3 == 0)
{
printf("fizz");
}
else if (a % 5 == 0)
{
printf("buzz");
}
else if (a % 15 == 0)
{
printf("fizzbuzz");
}
else
{
printf("%d", a);
}
if (a != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}

