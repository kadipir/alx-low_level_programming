#include "main.h"
/** 
 * *leet - converts characters to 1337
 * @str: pointer to the 
 * Return: 1337 (successful)
 */
char *leet(char *a)
{
int i, j;
char s1[] = 'aAeEoOtTlL';
char s2[] = '4433007711'

for (i = 0; a[i] != '\0' ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (a);
}

