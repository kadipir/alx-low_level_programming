#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - entry point
 * @min: input
 * @max: input
 * Return: pointer
 */
int *array_range(int min, int max)
{
int i, *l;

if (min > max)
{
return (NULL);
}
l = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (l == NULL)
{
return (NULL);
}
while (min <= max)
{
l[i] = min;
i++;
min++;
}
return (l);
}
