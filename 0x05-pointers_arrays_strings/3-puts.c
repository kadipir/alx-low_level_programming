#include "main.h"
/**
 * _puts - prints the string and the new line
 *  @str: pointer to the string
 * Return:string and new line
 */
void _puts(char *str)
{
int i;

i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
