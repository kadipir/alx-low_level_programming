#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: value (successfull)
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, value;

value = 0;

for (i = 0 ; s[i] != '\0' ; i++)

{
for (j = 0 ; accept[j] != '\0' ; j++)
{
if (accept[j] == s[i])
{
value++;
}
}
}
return (value);
}

