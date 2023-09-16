#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - entry point
 * @separator: pointer to string to be printed
 * @n: input
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
unsigned int i;
char *str;

va_start(string, n);
for (i = 0 ; i < n ; i++)
{
str = va_arg(string, char *);
if (separator == NULL)
{
printf("nil");
}
else
{
printf("%s", str);
}
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(string)o;
}
