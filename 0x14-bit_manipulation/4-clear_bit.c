#include "main.h"
#include <stddef.h>
/**
 * clear_bit - entry point
 * @n: bit to be manipulated
 * @index: position of bit to be manipulated
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
int x;

x = 1;
x = x << index;

if (index > (sizeof(unsigned int) * 8) || n == NULL)
{
return (-1);
}
if (((*n >> index) & 1) == 1)
{
*n = *n ^ x;
}
return (1);
}
