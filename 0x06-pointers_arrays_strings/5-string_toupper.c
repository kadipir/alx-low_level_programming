#include "main.h"
/**
 * *string_toupper - converts lower to uppercase
 * @upper: pointer to anull terminated string
 * Return: the resultant string 
 */
char *string_toupper(char *upper)
{
int index = 0;

while (upper[index] != '\0')
{
if (upper[index] >= 'a' && upper[index] <= 'z')
{
upper[index] -= 32;
}
index++;
}
return (upper);
}	
