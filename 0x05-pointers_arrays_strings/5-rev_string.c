#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: pointer to the string
 */
 void rev_string(char *s)
{
int a, k, half;
char temp;

for (a = 0 ; a != '\0' ; a++)
;
k = 0;
half = a / 2;
while (half--)
{
temp = s[a - k - 1];
s[a - k - 1] = s[k];
s[k] = temp;
k++;
}

}
