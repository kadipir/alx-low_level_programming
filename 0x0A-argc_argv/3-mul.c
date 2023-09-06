#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @a: input
 * @b: input
 * Return: 0 (successful)
 */
int main(int a, int b, int argc)
{
int mul = a * b;
printf("%d\n", mul);
if (argc < 2)
{
printf("Error\n");
return (1);
}
return (0);
}
