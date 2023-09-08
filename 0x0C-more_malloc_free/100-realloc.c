#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
int i;

if (old_size == new_size)
{
return (ptr);
}
if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
{
return (NULL);
}
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
if (nptr == NULL)
{
return (NULL);
}
for (i = 0 ; i < new_size && i < olde_size ; i++)
{
nptr[i] = ((char *) ptr)[i];
}
free(ptr);
return (nptr);
}
