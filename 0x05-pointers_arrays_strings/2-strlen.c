#include "main.h"
/**
 * _strlen - checks the length of a string
 * @s: string to be checked
 * return: length of the string
 */
int _strlen(char *s)
{
int string_l;

string_l = 0;
while(s[string_l])
	string_l++;
return (string_l);
}
