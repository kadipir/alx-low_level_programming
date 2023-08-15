#include "main.h"
/**
 * _abs - prints absolute value of an integer
 * @c: the integer to be checked
 * Return:absolute number of integer or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;
		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
