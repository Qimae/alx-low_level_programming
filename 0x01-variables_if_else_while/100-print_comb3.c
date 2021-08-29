#include <stdio.h>
/**
* main - Prints possible combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int num;
		int zero;

		for (num = 0; num <= 9; num++)
		{
		for (zero = num + 1; zero <= 9; zero++)
		{
		putchar(num + '0');
		putchar(zero + '0');

		if (num < 8)
		{
		putchar(',');
		putchar(' ');
		}
	}
}
		putchar('\n');

	return (0);
}
