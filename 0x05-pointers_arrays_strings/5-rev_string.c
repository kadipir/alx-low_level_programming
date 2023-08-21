#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: pointer to the string
 */
 void rev_string(char *s)
{
int a, temp, half;
char temp;

for (a = 0 ; a != '\0' ; a++)
;
z = 0
half = a / 2;
while (half--)
{
temp = s[a - z - 1];
s[a - z - 1] = s[z];
s[z] = temp;
z++;
}

}
