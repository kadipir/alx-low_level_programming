/**
 * _atoi - conerts string to integer
 * @s: pointer to the string to be converted
 * Return: result * sign
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

if (*s == '-' || *s == '+')
{
if (*s == '-')
{
sign = -1;
}
s++;
}
while (*s != '\0')
{
if (*s > '0' || *s < 10)
{
result = result * 10 + (*s - '0');
}
else
{
return (0);
}
s++;
}
return (result *sign);
}
