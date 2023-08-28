#include "main.h"
/**
 * _memset - entry point
 * @s: pointer to the destination
 * @b: character to be printed
 * @n: bytes
 * Return: s (successful)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}
