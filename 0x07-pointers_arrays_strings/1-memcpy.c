#include "main.h"
/**
 * _memcpy - copies a memory block
 * @dest: destination 
 * @src: source
 * @n: bytes
 * Return: dest (successfull)
 */ 
char *_memcpy(char *dest, char *src, unsigned int n)
{       
umsigned int i;

for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}       
return (dest);
}       
