#include "main.h"

/**
 * binary_to_uint - entry point
 * @b: pointer to string containing binary
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int dec = 0;

if (!b)
{
return (0);
}
for (x = 0 ; b[x] != '\0' ; x++)
{
if (b[x] < '0' || b[x] > '1')
{
return (0);
}
dec = 2 * dec + (b[x] - '0');
}
return (dec);
}
