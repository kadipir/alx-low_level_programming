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
int index = 0, dest_len = 0;

while (dest[index])
{
dest_len++;
}
for (index = 0 ; src[index] && index < n ; index++)
{
dest[dest_len++] =  src[index];
}
return (dest);
}
