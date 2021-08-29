#include <stdio.h>
/**
* main - Prints possible combinations of two two-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
                int num;
                int zero;
		int num1;
		int zero1;

                for (num = 0; num <= 9; num++)
                {
                for (zero = num + 0; zero <= 9; zero++)
                {

		if (num1 < 9)
		putchar(' ');

                putchar(num + '0');
                putchar(zero + '0');

		for (num1 = 0; num1 <= 9; num1++)
		{
		for (zero1 = num1 + 1; zero1 <= 9; zero1++)
		{
		putchar(num1 + '0');
		putchar(zero1 + '0');

                if (num < 9)
                {
                putchar(',');
                putchar(' ');
                }
		}
		}
        }
}
                putchar('\n');

        return (0);
}

