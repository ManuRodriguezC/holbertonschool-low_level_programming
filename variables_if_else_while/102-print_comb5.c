#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
int n1 = 0;
int n2 = 0;
for (n1 = 0 ; n1 <= 99 ; n1++)
{
	for (n2 = 0 ; n2 <= 99 ; n2++)
	{
		if (n1 < n2)
		{
		
			putchar(n / 10 + '0');
        		putchar(n % 10 + '0');
			putchar(' ')

			putchar(n2 / 10 + '0');
			putchar(n2 % 10 + '0');

			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
	}
}
}