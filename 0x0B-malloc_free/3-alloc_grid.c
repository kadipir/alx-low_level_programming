#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: input
 * @height: input
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
int **i, l, k;
int z = width * height;

if (z <= 0)
{
return (NULL);
}
i = malloc((sizeof(int)) * width);
if (i == NULL)
{
return (NULL);
}
for (l = 0 ; l < width ; l++)
{
i[l] = malloc((sizeof(int)) * height);
if (i[l] ==  NULL)
{
for (l-- ; l >= 0 ; l--)
{
free(i[l]);
}
free(i);
return (NULL);
}
}
for (l = 0 ; l < width ; l++)
{
for (l = 0 ; k < height ; k++)
{
i[l][k] = 0;
}
}
return (i);
}
