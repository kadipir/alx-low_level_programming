#include "main.h"

/**
 * cap_string - converts all characters to upper case
 * @str: pointer to the string
 * Return: result after conversion
 */

char *cap_string(char *str)
{
int index = 0;

while (str[index] != '\0')
{
while (str[index] >= 'a'  && str[index] <= 'z')
{
if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
index == 0)

str[index] -= 32;
index++;
}
}
return (str);
}
