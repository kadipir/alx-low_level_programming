#include "main.h"
/**
 * flip_bits - entry point
 * @n: input
 * @m: input
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int exclusive;
unsigned int count;
exclusive =  n ^ m;
for (count = 0 ; exclusive > 0;)
{
if ((exclusive & 1) == 1)
{
count++;
}
exclusive = exclusive >> 1;
}
return (count);
}
