#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: pointer to thr string
 */
void puts_half(char *str)
{
int half, full;

for (full = 0 ; str[full] ; full++)

half = full / 2;
if (full % 2 == 1)
	half++;

while(half < full)
{
_putchar(str[half]);
half++;
}
_putchar('\n');
}
