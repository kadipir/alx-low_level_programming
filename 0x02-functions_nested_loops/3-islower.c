#include "main.h"
/** _islower - checks for lower case letters
 * @c - the character to be examined
 * returns 1 for lowercase and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
return (0);
}
