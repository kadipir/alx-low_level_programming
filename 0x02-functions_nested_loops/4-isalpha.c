#include "main.h"
/**
 * _isalpha - chrcks for alphabetic character
 * @c - the character to be checked
 * return: 1 for alphabetic character and 0 for anthing else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
