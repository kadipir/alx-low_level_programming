#include "main.h"

/**
 *
 *
 *
 */ 

char *cap_string(char *str)
{
int index = 0;

while (str[index] != '\0')
{
str[index] -= 32;
index++;
}
return (str);
}
