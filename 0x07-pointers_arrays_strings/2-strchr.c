#include <stdio.h>
#include "main.h"
/**
 * _strchr - entry point
 * @s: string to be studied
 * @c: character sort after
 * Return: pointer or Null
 */
char *_strchr(char *s, char c)
{
int a;

for (a = 0 ; s[a] >= '\0' ; a++)
{
if (s[a] == c)
{
return (s + a);
}
}
return (NULL);
}
