#include "main.h"

unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned int x;
unsigned int y;

x = 1;
for (y = 1 ; y < power ; y++ )
{
x *= base;
}
return (x);
}

void print_binary(unsigned long int n)
{
unsigned long int binary, z;
char flag;

flag = 0;
binary =  _pow(2, sizeof(unsigned long int) * 8 - 1);
while (binary != 0)
{
z = n & binary;
if (z == binary)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || binary == 1)
{
_putchar('0');
}
binary >>= 1;
}
}
