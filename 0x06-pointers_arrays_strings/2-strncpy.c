#include "main.h"
/**
 *
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
for a = 0, index = 0;

while (src[a] != '\0')
{
a++;
}
for (a = 0 ; src[a] != '\0' && a < n ; a++)
{
dest[index] = src[a];
}

for (a = 0 ; src[a] != '\0' && a < n ; a++)
{
dest[index] = '\0';
}
return (dest);

}

