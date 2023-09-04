#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - entry point
 * @size: bytes
 * @c: input
 */
char *create_array(unsigned int size, char c)
{
unsigned int s;
char *a;

if(size == 0)
{
return (NULL);
}
if (a == NULL)
{
return (NULL);
}
for (s = 0 ; s < size ; s++)
{
a[s] = c;
}
a = malloc(sizeof(size) * size);
return (a);
}
