#include "main.h"
/**
 * is_prime_number - entry point
 * @n: input
 * Return: 0 or 1
 */
int actual_prime(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates prime number
 * @n: input
 * @i: input
 * Return: 0 or 1
 */
int actual_prime(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 1)
{
return (0);
}
return (actual_prime(n, i - 1));
}
