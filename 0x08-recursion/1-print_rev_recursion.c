#include "main.h"
/**
 * _print_rev_recursion - entry point
 * @s: character to be reversed
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
