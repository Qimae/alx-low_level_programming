#include <stdio.h>
/**
* main - Prints possible combinations of three digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int num;
		int zero;
		int thirds;

		for (num = 0; num <= 9; num++)
	{
		for (zero = num + 1; zero <= 9; zero++)
	{
		for (thirds = zero + 1; thirds <= 9; thirds++)
	{
		putchar(num + '0');
		putchar(zero + '0');
		putchar(thirds + '0');
	
		if (num < 7)
	{
		putchar(',');
		putchar(' ');
			}
		}
	}
}
		putchar('\n');
		
		return (0);
}
