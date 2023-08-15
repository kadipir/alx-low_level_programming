#include "main.h"
/**
 * print_to_98 - prints natural numbers to 98
 * Return: no value
 */
void print_to_98(int n)
{
	int n;
       
	for (n = 0 ; n < 99 ; n++)
	{
	  _putchar(n);
	  _putchar(',');
	  _putchar(' ');
	}
	_putchar('\n');
}

