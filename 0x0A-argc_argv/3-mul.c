#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @a: input
 * @b: input
 * Return: 0 (successful)
 */
int main( int argc, char *argv[])
{
if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n1 * n2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
