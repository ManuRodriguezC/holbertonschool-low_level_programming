#include <stdio.h>

/**
 *main -  all possible different combinations of two digits
 *
 *Return: 0
 */
int main(void)
{
int left = 0;
int right = 1;
int space = ' ';
int comm = ',';
for (left = 0 ; left <= 9 ; left++)
{
	for (right = 1 ; right <= 9 ; right++)
	{
		if (left < right)
		{
			putchar(left + '0');
			putchar(right + '0');
			if (left != 8 || right != 9)
			{
				putchar(comm);
			}
			putchar(space);
		}
	}
}
return (0);
}
