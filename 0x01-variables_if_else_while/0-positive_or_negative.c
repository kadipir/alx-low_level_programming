#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf("98 is positive"); }
else if (n == 0)
{printf("0 is zero"); }
else if (n <= 0)
{printf("-98 is negative"); }
return (0);
}
