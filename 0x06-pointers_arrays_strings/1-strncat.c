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
int index = 0, a;

while (dest[index])
{
index++;
}
for (a = 0 ; src[a] && a < n ; a++)
{
dest[index] =  src[a];
index++;
}
dest[index] = '\0';
return (dest);
}
