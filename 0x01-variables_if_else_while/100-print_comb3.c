#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 ()Success)
 */
int main(void)
{int x, y;
for (x = 0 ; x < 10 ; x++)
{for (y = 0 ; y < 10 ; y++)
if (x < y)
{{putchar(x);
putchar(y);
if (x != 8 || (x == 8 && y != 9))
{putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
