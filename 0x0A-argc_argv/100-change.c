#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
int cents;
if (argc > 2)
{
printf("Error\n");
return (1);
}
else
{
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
}
printf("%d\n", cents);
}
return (0);
}
