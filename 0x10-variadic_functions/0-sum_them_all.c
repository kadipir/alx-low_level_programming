#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - entry point
 * @n: variadic argument
 * Return: 0 (Sucesfull)
 */
int sum_them_all(const unsigned int n, ...)
{
va_list sum;
unsigned int i, total;
va_start(sum, n);
for (i = n ; i > 0 ; i++)
{
total += va_arg(sum, int);
}
va_end(sum);
return (total);
}
