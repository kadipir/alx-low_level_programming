#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - entry point
 * @s1: input
 * @s2: input
 * @n: input
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, l = 0;
char *c;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
if (n >= j)
{
l = i + j;
}
else
{
l = i + n;
}
c = malloc(sizeof(char) * l + 1);
if (c == NULL)
{
return (NULL);
}
j = 0;
while (k < l)
{
if (k <= i)
{
c[k] = s1[k];
}
if (k >= i)
{
c[k] = s2[j];
j++;
}
k++;
}
c[k] = '\0';
return (c);
}

