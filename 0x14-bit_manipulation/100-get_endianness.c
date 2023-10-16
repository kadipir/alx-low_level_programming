#include "main.h"
/**
 * get_endianness - entry point
 * Return: 1 or 0
 */
int get_endianness(void)
{
unsigned long int index = 1;
char *data = (char *)&index;

if (*data == 1)
{
return (1);
}
else
{
return (0);
}
}
