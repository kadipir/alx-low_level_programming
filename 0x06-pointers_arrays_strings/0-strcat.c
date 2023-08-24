#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: string to be copied
 * Return: pointer to the resultant string
 */
char *_strcat(char *dest, char *src)
{
char *desti = desti;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (desti);
}
