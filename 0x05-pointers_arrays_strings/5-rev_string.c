#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: pointer to the string
 */
 void rev_string(char *s)
{
int a = 0;

while (s[a])
{
a++;
}
while (a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
