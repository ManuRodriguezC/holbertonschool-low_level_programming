#include <stdio.h>

/**
 *main -  all possible different combinations of two digits
 *
 *Return: 0
 */
int main(void)
{
int left = 0;
int right = 0;
int space = ' ';
int comm = ',';
for (left = 0 ; left <= 9 ; left++)
{
	for (right = 0 ; right <= 0 ; right++)
	{
		if (left <= right)
		{
		putchar(left);
		putchar(right);
		if (left != 8 && right != 9)
		{
			putchar(comm);
			putchar(space);
		}
	}

}
return (0);
}
}
