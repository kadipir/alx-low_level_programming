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
int *i, l, k;

if (width <= 0 || height <= 0)
{
return (NULL);
}
if (i == NULL)
{
return (NULL);
}
i = malloc((sizeof(int)) * (width + height));
for (l = 0 ; l < width ; l++)
{
for (k = 0 ; k < height ; k++)
{
i[l][k];
}
}
return (i);
}
