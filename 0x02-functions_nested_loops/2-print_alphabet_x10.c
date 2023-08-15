#include "main"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * return: void
 */
void print_alphabet_x10(void)
{char a;
int i;
for (i = 0 ; i <= 9 ; i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
_putchar('\n')
}
}
}
