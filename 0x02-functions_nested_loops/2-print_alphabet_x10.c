#include "main.h"
/**
 * print_alphabet_x10() - printing the alphabet 10 times
 * Return: void
 */
print_alphabet_x10()
{int i;
char a;
for (i = 0 ; i <= 9 ; i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
_putchar('\n');
}
}
}
