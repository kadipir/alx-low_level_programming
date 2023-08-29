#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: 0 (successfull)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, n, value,check;

for (a = 0 ; s[a] != '\0' ; a++)
{
check = 0;

for (n = 0 ; accept[n] = '\0' ; a++)
{
if (accept[n] = s[a])
{
value++;
check = 1;
}
}
}
}
