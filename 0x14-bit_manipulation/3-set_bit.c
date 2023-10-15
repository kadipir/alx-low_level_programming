#include "main.h"
#include <stddef.h>
/**
 * set_bit - entry point
 * @n: bit to be manipulated
 * @index: position to be manipulated
 * Return: the new value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int x;

if (index > sizeof(unsigned int) * 8)
{
return (-1);
}
x = 1;
x = x << index;
*n = ((*n) | x);
return (1);
}
