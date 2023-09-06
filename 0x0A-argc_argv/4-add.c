#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argumet count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
int i;
unsigned int k, sum;
char *c;

if (argc > 1)
{
for (i = 0 ; i < argc ; i++)
{
c = argv[i];
for (k = 0 ; k < strlen(c) ; k++)
{
if (c[k] < 48 || c[k] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(c);
c++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
