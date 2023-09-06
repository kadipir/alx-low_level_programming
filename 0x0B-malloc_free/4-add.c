#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argumnet vector
 * Return: 0 (success)
 */
int main(int argc, char *argv)
{
int i, k;
char *e;

if (argc > 1)
{
for (i = 1 ; i < argc ; i++)
{
e = argc[i];
for (k = 0 ; k < strlen(e) ; k++)
{
if (e < 48 || e > 57)
{
printf("Error\n");
return (1);
}
sum += atoi(e);
e++;
}
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}

