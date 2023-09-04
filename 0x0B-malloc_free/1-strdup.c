#include "main.h"
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: input
 * Return: pointer to the string
 *
 */
char *_strdup(char *str)
{
int i, size = 1;
char *s;

if (str == NULL)
{
return (NULL);
}

while (str[size])
{
size++;
}

s = malloc((sizeof(char) * size) +1);
if (s == NULL)
{
return (NULL);
}

for (i = 0 ; i < size ; i++)
{
s[i] = str[i];
}

s[i] = '\0';
return (s);
}
