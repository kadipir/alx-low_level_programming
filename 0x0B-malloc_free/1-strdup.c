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

if (str == NULL)
{
return (NULL);
}

while (str[size])
{
size++;
}

char *s;

s = malloc((sizeof(char) * length) + 1);

for (i = 0 ; i < length ; i++)
{
s[i] = str[i];
}       
}
return (s);
}
