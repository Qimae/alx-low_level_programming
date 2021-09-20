#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: Character in ASCII code
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
