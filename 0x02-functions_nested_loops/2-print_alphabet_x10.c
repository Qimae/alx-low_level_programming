#include "main.h"

/**
* print_alphabet_x10 - Print the alphabet 10 times in lowercase.
*
* Return: void.
*/

void print_alphabet_x10(void)
{
int i, n;

for (n = 0; n < 10; n++)
{
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
