#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: string whose length is evaluated
 * return: len
 */
int _strlen(char *s)
{
int string_l;

string_l = 0;
while(s[string_l])
   string_l++
return (string_l);
}
