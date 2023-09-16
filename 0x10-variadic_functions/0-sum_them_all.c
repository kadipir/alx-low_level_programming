#include <stdarg>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * sum-them_all - entry point
 * @n: variadic argument
 * Return: 0 (Sucesfull)
 */
int sum_them_all(const unsigned int n, ...)
{
va_list sum;
int i, total;
n = 0;
va_start(sum, n);
for (i = n ; i > 0 ; i = va_arg(sum, int));
{
total+=i;
printf("%d", total);
}
return (0);
}
