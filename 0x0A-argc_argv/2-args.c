#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (successfull)
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0 ; i < argc ; i++)
{
printf("%d\n", argv[i]);
}
return (0);
}
