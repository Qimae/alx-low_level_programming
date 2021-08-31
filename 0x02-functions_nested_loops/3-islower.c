#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: Character in ASCII code
 * Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c < 123)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
