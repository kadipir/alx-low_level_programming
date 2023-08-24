#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: the destination string
 * @src: string to be copied
 * @n: bytes to be used by src
 * Return: pointer to the resultant string
 */
char *_strncat(char *dest, char *src, int n)
{
int dlen = 0, i;
while (dest[dlen] = '\0')
{
dlen++;
}
for (i = 0 ; src[i] != '\0' && n > 0 , i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen] = '\0';
return (dest);
