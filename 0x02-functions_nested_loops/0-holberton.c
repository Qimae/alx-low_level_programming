#include "main.h"
/**
 * main - Prints Holberton, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
char *c = "Holberton";
int i;

for (i = 0; i < 9; i++)
{
_putchar(c[i]);
}
_putchar('\n');

return (0);
}