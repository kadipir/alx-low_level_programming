#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @c: number to be checked
 * Return: value of last digit or 0 if any other 
 */
int print_last_digit(int c)
{  
int n = c % 10;
if (n < 0)
{
n = n * -1;	 
}
_putchar(n + '0');
return (n);	     
}
