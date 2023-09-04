#include "main.h"
/**
 * create_array - entry point
 * @size: number of bytes
 * @c: input
 */
char *create_array(unsigned int size, char c)
{
_putchar(c);
if (size <= 0)
{
return (NULL);
}
c = malloc(sizeof(size));
return (*c);
}
