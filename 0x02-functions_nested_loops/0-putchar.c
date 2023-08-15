#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @chara - the character to print
 * Return: 1 (success)
 * Return: -1 (error)
 */
int _putchar(char chara)
{
	return (write(1, &chara, 1);
}
