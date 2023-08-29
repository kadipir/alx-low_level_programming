#include "main.h"
/**
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, value, check;

for (i = 0 ; s[i] != '\0' ; i++)
check = 0;
{
for (j = 0 ; accept[j] != '\0' ; j++)
{
if (accept[j] == s[i])
{
check = 1;
value++;
}
}
}
return (s);
}

