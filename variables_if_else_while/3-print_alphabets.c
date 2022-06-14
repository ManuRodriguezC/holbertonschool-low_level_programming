#include<stdio.h>

/**
 *main - alphabet
 *
 *Return: 0
 */

int main(void)
{
char al;
char alm;

for (al = 'a' ; al <=  'z' ; al++)
{
	putchar(al);
}
for (alm = 'A' ; alm <= 'Z' ; alm++)
{
	putchar(alm);
}
putchar('\n');
return (0);
}
