#include "main.c"
/**
 *
 *
 *
 *
 */
char *_strchr(char *s, char c)
{
unsigned int a;

for (a = 0 ; s[a] != '\0' ; a++)
{
if (s[a] == c)
{
return (s + 1);
}
}
return (NULL);
}
