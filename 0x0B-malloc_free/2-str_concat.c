#include "main.h"
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1: input
 * s2: input
 * Return: pointer to result
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int i = 1, j = 1;

if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
 
while (s1[i])
{
i++;
}

while (s2[j])
{
j++;
}

s = malloc(i + j + 1);

if (s == NULL)
{
Return (NULL);
}
s = '\0';
return (s);
}
