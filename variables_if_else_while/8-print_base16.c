#include <stdio.h>

/**
 *main - hexadecimal
 *
 *Return: 0
 */
int main(void)
{
	char n;
	char al;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (al = 'a' ; al <= 'f' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
