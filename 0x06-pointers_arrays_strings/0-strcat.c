#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: string to be copied
 * Return: pointer to the resultant string
 */
char *_strcat(char *dest, char *src)
{
int dlen = 0, i;

while (dest[dlen])
{
dlen++;
}
for (i = 0 ; src[i] ; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[len] = '\0';
return (dest);
}
