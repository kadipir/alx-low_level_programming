#include "main.h"
#include <stddef.h>
/**
 * get_bit - entry point
 * @n: input decimal
 * @index: position to be retrieved
 * Return: 1 0r 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int x;

if (index > sizeof(size_t) * 8)
{
return (-1);
}
for (x = 0; x < index ; x++)
{
n = n >> 1;
}
return (n & 1);
}
