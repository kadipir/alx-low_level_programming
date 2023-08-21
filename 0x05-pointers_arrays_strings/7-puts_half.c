#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: pointer to thr string
 */
void puts_half(char *str)
{
int half, full = 0;

while (str[full] != '\0')
{
full++);
}

if (full % 2 == 1)
{
half = (full - 1) / 2;
half += 1;
}
else
{
half = full / 2;
}

while (half < full)
{
_putchar(str[half]);
half++;
}
_putchar('\n');
}
